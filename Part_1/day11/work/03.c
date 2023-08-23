// // 编写一个程序，要求用户输入两个整数m和n，然后动态创建一个m行n列的二维整数数组。
// // 通过循环将数组的元素赋值为m行n列的连续整数。最后打印数组的内容。

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    printf("请输入m和n的值：");
    scanf("%d %d", &m, &n);

    // 动态分配二维数组的内存空间
    int **arr = (int **)malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++)
    {
        arr[i] = (int *)malloc(n * sizeof(int));
    }

    // 将二维数组的元素赋值为m行
    int num=0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = num++;
        }
    }

    // 输出二维数组的元素
    printf("生成的二维数组为：\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%-2d ", arr[i][j]);
        }
        printf("\n");
    }

    // 释放二维数组的内存空间
    for (int i = 0; i < m; i++)
    {
        free(arr[i]);
    }
    free(arr);

    return 0;
}