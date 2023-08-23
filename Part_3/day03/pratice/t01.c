#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char const *argv[])
{
    // 获取当前程序终端名称
    printf("终端名 %s , 进程号 %d ，父进程号 %d ， 进程组号 %d \n", ttyname(0), getpid(), getppid(), getpgid(0));
    return 0;
}
