// 编写一个程序，创建两个消息队列，一个用于发送整数消息，另一个用于发送字符串消息。
// 创建两个子进程，一个子进程向整数消息队列发送一系列整数，
// 另一个子进程向字符串消息队列发送一系列字符串。父进程从两个消息队列分别接收消息，并将它们打印输出。
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>

#define MAX_MESSAGE_SIZE 256

struct int_message
{
    long mtype;
    int mvalue;
};

struct string_message
{
    long mtype;
    char mtext[MAX_MESSAGE_SIZE];
};

void int_sender(int msgqid)
{
    struct int_message msg;
    int values[] = {10, 20, 30, 40, 50};
    int num_values = sizeof(values) / sizeof(values[0]);

    for (int i = 0; i < num_values; i++)
    {
        msg.mtype = i + 1;
        msg.mvalue = values[i];

        if (msgsnd(msgqid, &msg, sizeof(msg.mvalue), 0) == -1)
        {
            perror("msgsnd");
            exit(1);
        }
    }
}

void string_sender(int msgqid)
{
    struct string_message msg;
    char *strings[] = {"Hello", "World", "This", "Is", "OpenAI"};
    int num_strings = sizeof(strings) / sizeof(strings[0]);

    for (int i = 0; i < num_strings; i++)
    {
        msg.mtype = i + 1;
        strncpy(msg.mtext, strings[i], sizeof(msg.mtext) - 1);
        msg.mtext[sizeof(msg.mtext) - 1] = '\0';

        if (msgsnd(msgqid, &msg, sizeof(msg.mtext), 0) == -1)
        {
            perror("msgsnd");
            exit(1);
        }
    }
}

void receiver(int msgqid)
{
    struct int_message int_msg;
    struct string_message string_msg;

    while (1)
    {
        if (msgrcv(msgqid, &int_msg, sizeof(int_msg.mvalue), 0, IPC_NOWAIT) != -1)
        {
            printf("Received integer message from process %ld: %d\n", int_msg.mtype, int_msg.mvalue);
        }

        if (msgrcv(msgqid, &string_msg, sizeof(string_msg.mtext), 0, IPC_NOWAIT) != -1)
        {
            printf("Received string message from process %ld: %s\n", string_msg.mtype, string_msg.mtext);
        }

        // Break the loop if both message queues are empty
        if (int_msg.mtype == 0 && string_msg.mtype == 0)
        {
            break;
        }
    }
}

int main()
{
    key_t int_key, string_key;
    int int_msgqid, string_msgqid;
    pid_t int_sender_pid, string_sender_pid;

    // Generate unique keys for the message queues
    if ((int_key = ftok(".", 'I')) == -1)
    {
        perror("ftok");
        exit(1);
    }
    if ((string_key = ftok(".", 'S')) == -1)
    {
        perror("ftok");
        exit(1);
    }

    // Create the message queues
    if ((int_msgqid = msgget(int_key, IPC_CREAT | 0666)) == -1)
    {
        perror("msgget");
        exit(1);
    }
    if ((string_msgqid = msgget(string_key, IPC_CREAT | 0666)) == -1)
    {
        perror("msgget");
        exit(1);
    }

    // Create the integer sender process
    if ((int_sender_pid = fork()) == -1)
    {
        perror("fork");
        exit(1);
    }
    else if (int_sender_pid == 0)
    {
        // Child process (integer sender)
        int_sender(int_msgqid);
        exit(0);
    }

    // Create the string sender process
    if ((string_sender_pid = fork()) == -1)
    {
        perror("fork");
        exit(1);
    }
    else if (string_sender_pid == 0)
    {
        // Child process (string sender)
        string_sender(string_msgqid);
        exit(0);
    }

    // Parent process
    receiver(int_msgqid);
    receiver(string_msgqid);

    // Wait for both child processes to finish
    wait(NULL);
    wait(NULL);

    // Remove the message queues
    if (msgctl(int_msgqid, IPC_RMID, NULL) == -1)
    {
        perror("msgctl");
        exit(1);
    }
    if (msgctl(string_msgqid, IPC_RMID, NULL) == -1)
    {
        perror("msgctl");
        exit(1);
    }

    return 0;
}