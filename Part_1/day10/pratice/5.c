// ;数组名也是一个第一个元素的地址， 指向数组元素地址的指针同数组名相同的。 
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[3];
    int *p=arr;
    printf("%p  %p\n",p,arr);
    return 0;
}
