// 编写一个程序，注册SIGUSR1和SIGUSR2信号，并在接收到信号时分别打印
// "Received SIGUSR1"和 "Received SIGUSR2"。
// 【提示】终端使用 kill -SIGUSR1 进程号 发送信号

#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>

void signal_handle1(int sig)
{
    printf("SIGUSR! was killed!\n");
}

void signal_handle2(int sig)
{
    printf("SIGUSR2 was killed!\n");
}

int main(int argc, char const *argv[])
{
    
    signal(SIGUSR1, signal_handle1);
    signal(SIGUSR2, signal_handle2);

    printf(" (PID): %d\n", getpid());

    while (1)
    {
    }
    return 0;
}
