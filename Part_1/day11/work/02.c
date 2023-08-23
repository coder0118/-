// 编写一个程序，要求用户输入一个字符串，然后动态创建一个字符数组，使其能够容纳用户输入的字符串。
// 然后将用户输入的字符串复制到动态创建的数组中，并打印该字符串。

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *create_arr(int size)
{
    char *p = (char *)malloc(size);
    if (p == NULL)
    {
        perror("malloc");
    }
    return p;
}

void scpy(char *dest, char *src)
{
    int i = 0;
    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main(int argc, char const *argv[])
{
    char s[100];
    printf("请输入一个字符串：\n");
    scanf("%s", s);
    char *p = NULL;
    p = create_arr(strlen(s) + 1);
    scpy(p, s);
    printf("%s\n", p);
    free(p);
    return 0;
}
