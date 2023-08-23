/*设计函数，接收一个数组和数组大小，返回数组中最大的元素。
【要求】函数的数组参数使用指针*/
#include <stdio.h>
#include <stdlib.h>

int max(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            arr[i+1] = arr[i];
        }
    }
    printf("%d\n", arr[len - 1]);
}

int main(int argc, char const *argv[])
{
    int arr[] = {8, 5, 4, 9, 7, 2, 8, 6, 1};
    int len = sizeof(arr) / 4 ;
    max(arr, len);
    return 0;
}
