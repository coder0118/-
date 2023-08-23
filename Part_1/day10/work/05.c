#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10] ={0};
    int *p1=NULL,*p2=NULL;
    p1=a;
    p2=&a[5];
    printf("%d\n",p2-p1);
    return 0;
}
