// 编写一个程序，注册SIGFPE信号，并在接收到信号时打印一条消息，提示发生了浮点异常
// 【提示】除数为0的情况
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

void signal_handle()
{
    printf("发生了浮点异常！\n");
    exit(0);
}

int main(int argc, char const *argv[])
{
    signal(SIGFPE, signal_handle);

    int a = 1;
    int b = a / 0;

    while (1)
    {
        
    }
    

    return 0;
}
