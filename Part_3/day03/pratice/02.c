#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int pid = fork();
    if (pid == 0)
    {
        printf("子进程 %d \n", getpid());
    }
    else if (pid > 0)
    {
        printf("父进程 %d \n", getpid());
    }
    return 0;
}
