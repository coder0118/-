/*给定一个long类型的变量，赋值0x010203040506,请按单字节方式输出这个变量的数值。*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    long a=0x010203040506;
    char *p=&a;
    for (int i = 0; i < sizeof(long)/sizeof(char); i++)
    {
        printf("%x ",*p);
        p++;
    }
    printf("\n");
    return 0;
}
