// 创建一个无名管道，并在父子进程之间传递数据。
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int fd[2];
    int f = pipe(fd);
    if (f == -1)
    {
        perror("pipe");
        return 1;
    }

    int pid = fork();

    if (pid == 0)
    {
        // 子进程
        close(fd[1]);
        char buf[32];
        int len = read(fd[0], buf, 32);
        buf[len] = '\0';
        printf("%d 子进程读取到数据 %s\n", getpid(), buf);
        close(fd[0]);
        _exit(0);
    }
    else if (pid > 0)
    {
        // 父进程
        close(fd[0]);
        char buf[32] = "666";
        sleep(3);
        write(fd[1], buf, strlen(buf));
        close(fd[1]);
    }

    return 0;
}
