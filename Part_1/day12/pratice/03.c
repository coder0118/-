// 字符串与字符串拼接，字符串与数组拼接，数字与数字拼接
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char buf[20] = "desin,";
    char buf2[10] = "666";
    sprintf(buf, "%s%s",buf, buf2);
    printf("%s\n", buf);
    return 0;
}
