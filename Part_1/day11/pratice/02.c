// 设计函数，获取键盘输入的用户名并返回
#include "stdio.h"
#include <stdlib.h>

// 分配内存
char *create_char_arr(int size)
{
    char *p_char_arr = (char *)malloc(size * sizeof(char));
    if (p_char_arr == NULL)
    {
        perror("malloc");
    }
    return p_char_arr;
}
// 输入数据并返回
void get_username_data(char *q)
{
    printf("请输入用户名：\n");
    scanf("%s", q);
}
// 输出数据
void puts_data(char *p)
{
    printf("%s\n", p);
}

int main(int argc, char const *argv[])
{
    char *name = create_char_arr(10);
    get_username_data(name);
    puts_data(name);
    free(name);
    return 0;
}
