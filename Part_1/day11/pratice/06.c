//使用strcpy函数
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char *p=(char *)malloc(20*sizeof(char));
    strcpy(p,"zhangjian");
    printf("%s\n",p);
    free(p);
    return 0;
}
