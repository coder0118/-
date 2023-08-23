#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a =2;
    int *p=&a;
    char m=126;
    int n = 32766;
    void *q=NULL;
    q = &n;
    printf("%d\n%#p\n%#p",*p , p, &a);
    printf("%d\n",*((char *)q));
    return 0;
}
