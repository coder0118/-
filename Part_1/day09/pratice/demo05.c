#include<stdio.h>
//数组元素的引用
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5};
    int *p=arr;
    for (int  i = 0; i < 5; i++)
    {
        printf("arr[%d]=%d\n",i,*p);
        p++;
    }
    
    return 0;
}
