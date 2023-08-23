// 编写一个程序，要求用户输入一串字符，然后动态创建一个字符数组，
// 并将用户输入的字符存储到数组中。然后，使用realloc函数将数组的大小扩展为原来的两倍，
// 并继续接受用户输入的字符，直到用户输入字符为换行符（ '\n'）。最后，打印数组中存储的所有字符。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char *s;
    printf("请输入一个字符串：\n");
    fgets(s, 20, stdin);
    printf("%s", s);
    char *arr = (char *)malloc(sizeof(s));
    arr=s;
    printf("%s\n", arr);

    return 0;
}
