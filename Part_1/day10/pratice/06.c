// 如果一个数组名取地址，即获取的是地址的地址，转成为数组指针
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[3][4];
    int *p = &arr;
    int **q = p;
    printf("%p  %p\n",p,q);
    return 0;
}
