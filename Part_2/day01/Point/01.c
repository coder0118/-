// 指针指向二维数组
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[2][3]={1,2,3,4,5,6};
    int(*p)[3]=arr;
    // 指针降维
    *(*(p+1)+1)=50;
    printf("%d\n",arr[1][1]);
    // 输出
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // printf("%d ", *(*(p + i) + j));
            printf("%d ", *(p[i] + j));
        }
        printf("\n");
        /* code */
    }
    
    return 0;
}
