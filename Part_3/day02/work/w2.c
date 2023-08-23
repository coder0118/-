// 编写一个程序，使用open系统调用打开一个已存在的文件，
// 并使用read系统调用从文件中读取内容，并将读取到的内容打印到控制台上。

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int fd = open("a.txt",O_RDONLY);
    if (fd<0)
    {
        perror("失败！");
    }

    char buffer[20];

    ssize_t len = read(fd,buffer,20);
    if (len!=-1)
    {
        printf("文件内容读取成功！ \n%s\n大小%ld types \n",buffer,len);
    }

    close(fd);
    
    return 0;
}
