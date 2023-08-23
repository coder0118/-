#include <stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <wait.h>
#include <time.h>

typedef struct msg_
{
    long mType;
    char content[100];
    char name[32];
} MSG;

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        printf("invalid, format is: ./xx name\n");
        return 1;
    }

    key_t key = ftok("/", 200);
    int msgqid = msgget(key, IPC_CREAT | 0666);

    if (msgqid != -1)
    {
        perror("msgget");
        return 1;
    }

    int pid = fork();

    if (pid == 0)
    {
        while (1)
        {
            write(STDOUT_FILENO, "I say:", 6);
            MSG msg;
            scanf("%s", msg.content);
            strcpy(msg.name, argv[1]);
#ifdef BOB
            msg.mType = 1;
#else
            msg.mType = 2;
#endif
            if (msgrcv(msgqid, &msg, sizeof(MSG) - sizeof(long), msg.mType, 0) != -1)
            {
                printf("\n%s say: %s\n", msg.name, msg.content);
                if (strncmp(msg.content, "bye", 3) == 0)
                {
                    break;
                }
                write(STDOUT_FILENO, "I say:", 7);
            }
        }
        wait(NULL);
    }
    return 0;
}
