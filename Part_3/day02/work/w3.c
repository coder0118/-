// 编写一个程序，创建一个子进程，并在子进程中打印出自己的进程ID（PID），
// 在父进程中打印出子进程的PID。

#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
    printf("当前进程ID (PID): %d\n", getpid());
    int pid = fork();
    if (pid == -1)
    {
        perror("创建子进程失败！");
        return 1;
    }
    else if (pid == 0)
    {
        printf("子进程ID (PID): %d\n",getpid());
    }
    else
    {
        printf("子进程ID (PID): %d\n",pid);
    }
    return 0;
}
