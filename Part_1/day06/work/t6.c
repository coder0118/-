/*编写程序并设计函数， 接收两个整数参数，输出这两个整数的所有公约数。
【提示】在main函数中通过键盘输入两个整数，并调用设计的函数。
*/
#include <stdio.h>

int Common_divisor(int, int);

int main(int argc, char const *argv[])
{
    int a, b;
    printf("请输入两个数：\n");
    scanf("%d %d", &a, &b);
    printf("%d和%d的公约数有：", a, b);
    Common_divisor(a, b);
    printf("\n");
    return 0;
}

int Common_divisor(int a, int b)
{
    for (int i = 1; i <= (a > b ? b : a); i++)
    {
        if (a % i == 0 && b % i == 0)
            printf("%d  ", i);
    }
    return 0;
}
