/*编写程序并设计函数， 接收一个整数值，验证这个数值是否为水仙花数。
【提示】水仙花数：每一位数字的3次幂累加的结果和这个数本身相同*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num;
    printf("请输入一个整数：\n");
    scanf("%d",&num);

    for (int m = 1; m <= num; m++)
    {
            
        int i = m / 100 % 10;
        int j = m / 10 % 10;
        int k = m % 10;
        if (m==(i*i*i+j*j*j+k*k*k))
        {
            printf("水仙花数有：%d\t",m);
        }
    }
    return 0;
}
