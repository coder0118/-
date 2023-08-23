// 请找出程序的错误行数（   ）
// int main()
// {
//     int a = '21';
//     const char *p = (char *)&a;
//     *p = 48;
//     printf("%s\n", p);
// }

#include<stdio.h>
#include<stdlib.h>
int main()
{
        int a = '21';
        const char *p = (char *)&a;
        int b=23;
        p = &b;
        printf("%d\n", p);
        
}
