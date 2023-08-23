// 编写一个程序，注册SIGALRM信号，并在接收到信号时打印一条消息，然后终止程序。
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void signal_handle(int sig)
{
    printf("接收到信号，终止程序\n");
    exit(0);
}

int main(int argc, char const *argv[])
{
    signal(SIGALRM,signal_handle);

    alarm(3);

    printf("程序运行中\n");

    while (1)
    {

    }
    
    return 0;
}
