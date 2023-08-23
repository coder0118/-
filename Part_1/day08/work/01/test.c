#include <stdio.h>
#include "a.h"
#include "b.h"

int main(int argc, char const *argv[])
{
    int j = 5;
    int arr[] = {1, 5, 6, 8, 9, 2};
    printf("%d的阶乘为：%d\n",j,Factorial(j));
    sort(arr,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
