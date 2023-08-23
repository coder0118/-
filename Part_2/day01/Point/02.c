// 二维数组作为函数的参数

#include<stdio.h>

void show(int rows,int cols,int (*p)[cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ",*(*(p+i)+j));
        }
        printf("\n");
    }
    
}

int main(int argc, char const *argv[])
{
    int arr[2][3]={1,2,3,4,5,6};
    show(2,3,arr);
    return 0;
}
