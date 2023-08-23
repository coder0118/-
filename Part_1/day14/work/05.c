// 设计函数，
// int filecpy(char *src_file, char *dst_file)
// 的功能，实现文件src_file备份到dst_file，
// 如果成功返回 0， 失败返回 1

#include <stdio.h>

int filecpy(char *src_file, char *dest_file)
{
    int n;
    while ((n=fgetc(dest_file))!=EOF)
    {
        fputc(n,src_file);
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    FILE *src_file = fopen("src.txt", "w");
    FILE *dest_file = fopen("dest.txt", "r");

    if (filecpy(src_file, dest_file) == 0)
    {
        printf("文件拷贝成功！\n");
    }
    else
    {
        printf("文件拷贝失败！\n");
    }
    fclose(src_file);
    fclose(dest_file);
    return 0;
}
