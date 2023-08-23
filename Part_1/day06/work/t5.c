/*编写程序，键盘输入5个整数，输出它们的所有排列组合*/

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void permute(int arr[], int start, int end)
{
    if (start == end)
    {
        for (int i = 0; i <= end; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else
    {
        for (int i = start; i <= end; i++)
        {
            swap(&arr[start], &arr[i]);
            permute(arr, start + 1, end);
            swap(&arr[start], &arr[i]);
        }
    }
}

int main()
{
    int arr[5];
    printf("请输入5个整数：\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("所有排列组合如下：\n");
    permute(arr, 0, 4);
    return 0;
}