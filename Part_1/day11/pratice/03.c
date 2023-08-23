// 动态申请学生姓名的字符指针并初始话为6
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *creat_init(int size)
{
    char *p = (char *)malloc(size);
    if (p == NULL)
    {
        perror("malloc list");
    }
    memset(p, '6', size - 1);
    return p;
}

int main(int argc, char const *argv[])
{
    char *q = creat_init(10);
    // 输入
    scanf("%s", q);
    // 输出
    printf("%s\n", q);
    free(q);
    return 0;
}
