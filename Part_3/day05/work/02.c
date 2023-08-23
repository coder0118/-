// 写一个程序，创建一个消息队列，然后创建多个子进程。每个子进程从标准输入读取一个字符串，并将字符串发送到消息队列。父进程从消息队列接收所有的消息，并将它们打印输出。
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>

#define MAX_MESSAGE_SIZE 256

struct message {
    long mtype;
    char mtext[MAX_MESSAGE_SIZE];
};

void sender(int msgqid) {
    struct message msg;

    printf("Enter a string: ");
    fgets(msg.mtext, sizeof(msg.mtext), stdin);
    msg.mtype = getpid();

    if (msgsnd(msgqid, &msg, sizeof(msg.mtext), 0) == -1) {
        perror("msgsnd");
        exit(1);
    }
}

void receiver(int msgqid) {
    struct message msg;

    while (1) {
        if (msgrcv(msgqid, &msg, sizeof(msg.mtext), 0, 0) == -1) {
            perror("msgrcv");
            exit(1);
        }

        printf("Received message from process %ld: %s", msg.mtype, msg.mtext);
    }
}

int main() {
    key_t key;
    int msgqid;
    int num_processes = 3;  // Number of child processes
    pid_t pid;

    // Generate a unique key for the message queue
    if ((key = ftok(".", 'M')) == -1) {
        perror("ftok");
        exit(1);
    }

    // Create the message queue
    if ((msgqid = msgget(key, IPC_CREAT | 0666)) == -1) {
        perror("msgget");
        exit(1);
    }

    // Create child processes
    for (int i = 0; i < num_processes; i++) {
        if ((pid = fork()) == -1) {
            perror("fork");
            exit(1);
        } else if (pid == 0) {
            // Child process
            sender(msgqid);
            exit(0);
        }
    }

    // Parent process
    receiver(msgqid);

    // Wait for all child processes to finish
    for (int i = 0; i < num_processes; i++) {
        wait(NULL);
    }

    // Remove the message queue
    if (msgctl(msgqid, IPC_RMID, NULL) == -1) {
        perror("msgctl");
        exit(1);
    }

    return 0;
}