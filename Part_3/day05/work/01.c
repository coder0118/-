// 编写一个程序，创建一个消息队列，然后创建两个子进程。一个子进程向消息队列发送消息，另一个子进程从消息队列接收消息，并将接收到的消息打印输出。
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>

#define MAX_MESSAGE_SIZE 256

struct message
{
    long mtype;
    char mtext[MAX_MESSAGE_SIZE];
};

void sender(int msgqid)
{
    struct message msg;
    msg.mtype = 1;
    strcpy(msg.mtext, "Hello, world!");

    if (msgsnd(msgqid, &msg, sizeof(msg.mtext), 0) == -1)
    {
        perror("msgsnd");
        exit(1);
    }

    printf("Sender sent message: %s\n", msg.mtext);
}

void receiver(int msgqid)
{
    struct message msg;

    if (msgrcv(msgqid, &msg, sizeof(msg.mtext), 1, 0) == -1)
    {
        perror("msgrcv");
        exit(1);
    }

    printf("Receiver received message: %s\n", msg.mtext);
}

int main()
{
    key_t key;
    int msgqid;
    pid_t sender_pid, receiver_pid;

    // Generate a unique key for the message queue
    if ((key = ftok(".", 'M')) == -1)
    {
        perror("ftok");
        exit(1);
    }

    // Create the message queue
    if ((msgqid = msgget(key, IPC_CREAT | 0666)) == -1)
    {
        perror("msgget");
        exit(1);
    }

    // Create the sender process
    if ((sender_pid = fork()) == -1)
    {
        perror("fork");
        exit(1);
    }
    else if (sender_pid == 0)
    {
        // Child process (sender)
        sender(msgqid);
        exit(0);
    }

    // Create the receiver process
    if ((receiver_pid = fork()) == -1)
    {
        perror("fork");
        exit(1);
    }
    else if (receiver_pid == 0)
    {
        // Child process (receiver)
        receiver(msgqid);
        exit(0);
    }

    // Wait for both child processes to finish
    wait(NULL);
    wait(NULL);

    // Remove the message queue
    if (msgctl(msgqid, IPC_RMID, NULL) == -1)
    {
        perror("msgctl");
        exit(1);
    }

    return 0;
}