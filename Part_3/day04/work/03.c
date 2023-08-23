// 创建两个子进程，一个子进程向从标准输入读取数据并向管道写入数据，另一个子进程从管道读取数据并输出标准设备。当输入的数据是bye时，则退出。父进程等待所有子进程退出。
#include <unistd.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int fd[2];
    int f = pipe(fd);
    if (f == -1)
    {
        perror("pipe");
        return 1;
    }

    int pid1 = fork();
    if (pid1 == -1)
    {
        perror("fork1");
        return 1;
    }
    else if (pid1 == 0)
    {
    }

    int pid2 = fork();
    if (pid2 == -1)
    {
        perror("fork2");
        return 1;
    }
    else if (pid2 == 0)
    {
    }

    return 0;
}
