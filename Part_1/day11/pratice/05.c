//使用strncpy(地址，内容，长度)函数
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char *p=(char *)malloc(48);
    if (p==NULL)
    {
        perror("malloc");
        return 1;
    }
    else{
        strncpy(p,"zhangjian",5);
    }
    printf("%s\n",p);
    free(p);
    return 0;
}