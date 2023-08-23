//指针加数值 地址
#include<stdio.h>
int main(int argc, char const *argv[])
{
    // int a =10;
    // int *p =&a;
    // printf("%p",p);
    // return 0;

    //指针的比较
    int arr[]={1,2,3};
    int *p = arr;
    printf("%p\n%p\n",p,p+1);
    printf("%d\n",p<p+1);
}
