// 编写一个程序，使用open系统调用创建一个新文件，
// 并使用write系统调用将字符串写入该文件。
// 【要求】写入至少两行数据

#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main(int argc, const char *argv[])
{
    int fd = open("a.txt", O_RDWR | O_CREAT, 0755);
    if (fd < 0)
    {
        perror("失败：");
        return 1;
    }

    printf("文件创建打开成功！");

    char content[32] = "hello\ndisen";

    ssize_t len = write(fd, content, strlen(content));

    if (len != -1)
    {
        printf("向文件号：%d，写入成功：%ld bytes \n", fd, len);
    }

    if (close(fd) < 0)
    {
        perror("失败！");
    }
    return 0;
}