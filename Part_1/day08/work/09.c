/*设计函数my_strlen(char *str)，返回str字符串的长度*/
#include <stdio.h>

int strLen(char *arr);

int main(int argc, char const *argv[])
{
    printf("%d\n", strLen("123454546567"));
    return 0;
}

int strLen(char *arr)
{
    int cnt = 0;
    while (*(arr++))
        cnt++;
    return cnt;
}
