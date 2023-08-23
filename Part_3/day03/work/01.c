// 编写一个程序，注册SIGINT信号，并在接收到信号时打印一条消息
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>

void handle_sigint(int sig)
{
    printf("\n接收到SIGINT信号，程序终止\n");
    exit(0);
}

int main(int argc, char const *argv[])
{
    signal(SIGINT, handle_sigint);

    printf("程序运行中\n");

    while (1)
    {
    }

    return 0;
}
