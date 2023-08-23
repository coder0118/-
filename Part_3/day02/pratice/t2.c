#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
int main(int argc, char const *argv[])
{
    int fd = open("a.txt",O_RDWR|O_CREAT|O_TRUNC,0644);
    if (fd < 0)
    {
        perror("文件打开失败！");
        return 1;
    }
    printf("文件打开并创建成功");

    if (close(fd) <0)
    {
        printf("关闭文件失败");
    }
    
    return 0;
}
