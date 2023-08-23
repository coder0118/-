/*编写程序并设计函数，接收年、月、日三个整数，函数返回是这一年的第几天
【提示】使用数组的方式计算，将每月的天数放在一个数组中*/
#include <stdio.h>
int sumDay(int,int,int);
int main(int argc, char const *argv[])
{
    /* code */
    int y,m,d;
    scanf("%d %d %d",&y,&m,&d);
    sumDay(y,m,d);
    return 0;
}

int sumDay(int y, int m, int d)
{
    int arrday[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int sum = 0;
    if ((y % 4 == 0 && y % 4 != 0) || y % 400 == 0)
    {
        while (m > 0)
        {
            sum += arrday[m - 1];
            m--;
        }
        sum += d + 1;
        printf("%d\n", sum);
    }
    else
    {
        while (m > 0)
        {
            sum += arrday[m - 2];
            m--;
        }
        sum += d;
            printf("%d\n", sum);
    }
}