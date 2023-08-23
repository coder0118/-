// 通过指针方式遍历一个二维数组
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int (*p)[4]=arr;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("请输入 %d行 %d列元素:\n",i+1,j+1);
            int *q = p+i;
            scanf("%d",q+j);
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("第%d行%d列元素：%d  ",i,j,arr[i][j]);
        }
        printf("%d\n");
    }
    
    
    return 0;
}
