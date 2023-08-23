// sscanf()从字符串获取
#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char *str = "disin,17789232134,703491550";
    char name[10];
    char phone[12];
    char qq[10];
    sscanf(str, "%5s,%11s,%9s", name, phone, qq);
    sscanf(str, "%*5s,%11s", phone);
    printf("%s\n%s\n%s\n", name, phone, qq);
    printf("%s\n", phone);
    return 0;
}
