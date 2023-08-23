#include<stdio.h>
int main(int argc, char const *argv[])
{
    int m=0x0102;
    int *p=&m;
    printf("%p %d\n",p,*p);
    char *q = (char *)&m;
    printf("%#x\n",*(q+1));
    return 0;
}
