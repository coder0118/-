// 编写一个程序，注册SIGQUIT信号，并在接收到信号时打印一条消息，并在信号处理函数中调用exit函数终止程序。
#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void signal_handle(int sig)
{
    printf("\n接收到信号，程序结束 %d\n",sig);
    exit(0);
}

int main(int argc, char const *argv[])
{
    signal(SIGQUIT,signal_handle);

    printf("程序正在运行中...\n");

    while (1)
    {
    }
    
    return 0;
}
