// 编写一个程序，注册SIGHUP信号，并在接收到信号时向
// out.txt文件写入一段信息表明哪一个终端在什么时间发生断开。
// 【提示】终端连接断开或kill 干掉终端

#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void signal_handle()
{
    int fd = open("out.txt", O_RDWR | O_CREAT, 0755);
    if (fd == -1)
    {
        perror("文件打开失败！");
        exit(1);
    }

    time_t current_time = time(NULL);
    struct tm *local_time = localtime(&current_time);
    
    char time_str[64];

    strftime(time_str, sizeof(time_str), "%Y-%m-%d %H:%M:%S", local_time);




    ssize_t written = write(fd, time_str, strlen(time_str));

    if (written == -1)
    {
        perror("数据写入失败！\n");
        exit(0);
    }
    printf("文件写入成功！\n");

    close(fd);
    exit(0);
}

int main(int argc, char const *argv[])
{

    signal(SIGHUP, signal_handle);

    printf("程序运行中\n");

    printf("当前进程号 (PID) %d\n",getpid());

    while (1)
    {
        
    }

    return 0;
}
