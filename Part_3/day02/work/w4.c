// 编写一个程序，使用open系统调用打开一个已存在的文件，
// 并使用lseek系统调用将文件指针移动到文件末尾，
// 然后使用write系统调用将用户从控制台输入的内容追加到文件末尾
// 【提示】man 2 lseek 查看帮助信息
//     off_t
//     lseek(int fd, off_t offset, int whence);
// whence： SEEK_SET， SEEK_CUR， SEEK_END

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    const char *content = argv[1];

    int fd = open("b.txt", O_RDWR | O_CREAT, 0755);
    if (fd < 0)
    {
        perror("文件打开失败！");
        return 1;
    }

    off_t offset = lseek(fd, 0, SEEK_END);
    if (offset == -1)
    {
        perror("文件指针移动失败！");
        return 1;
    }

    ssize_t written = write(fd, content, strlen(content));
    if (written == -1)
    {
        perror("文件追加失败！");
        return 1;
    }
    else
    {
        printf("文件写入成功！\n");
    }

    close(fd);

    return 0;
}
