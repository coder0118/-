// 创建两个子进程，一个子进程向管道写入数据，另一个子进程从管道读取数据。
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int main()
{
    int fd[2]; // 管道文件描述符数组
    int f = pipe(fd);
    if (f == -1)
    {
        perror("pipe");
        exit(1);
    }

    // 子进程1
    int pid1 = fork();

    if (pid1 == -1)
    {
        perror("fork1");
        exit(1);
    }
    else if (pid1 == 0) // 子进程1写入数据
    {                 
        printf("我是子进程1 PID（%d）\n",getpid());
        close(fd[0]);   // 关闭读取端
        char *data = "你好，我是子进程1!";
        write(fd[1], data, strlen(data) + 1);
        close(fd[1]);   // 关闭写入端
        exit(0);
    }

    // 子进程2
    int pid2 = fork();

    if (pid2 == -1)
    {
        perror("fork2");
        _exit(1);
    }
    else if (pid2 == 0) //子进程2读数据
    {
        close(fd[1]); // 关闭写入端
        char buffer[50];
        ssize_t bytes_read = read(fd[0], buffer, sizeof(buffer));
        if (bytes_read > 0)
        {
            printf("我是子进程2 PID（%d），接收到子进程1消息: %s\n",getpid(), buffer);
        }
        close(fd[0]); // 关闭读取端
        exit(0);
    }

    return 0;
}
