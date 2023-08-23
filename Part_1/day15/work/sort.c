#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a[6]={6,9,4,2,8,3};
    // 选择排序
    for (int i = 0; i < 6-1; i++)
    {
        for (int j = i+1; j < 6; j++)
        {
            if (a[i]>a[j])
            {
                int tmp = a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
            
        }
        
    }

    for (int i = 0; i < 6; i++)
    {
        printf("%d  ",a[i]);
    }
    
    
    return 0;
}
