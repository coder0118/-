// 设计函数int toInt(char *str), 实现将字符串转成数值的功能。
// 【提示】如 toInt("123") 返回 123
#include<stdio.h>
#include<math.h>
#include<string.h>
int toInt(char *str);
int main(int argc, char const *argv[])
{
    printf("%d\n",toInt("12345"));
    return 0;
}

int toInt(char *str)
{
    int i=0,sum=0,len=strlen(str);
    while (*(str+i))
    {
        sum+=(*(str+i)-'0')*pow(10,len-i-1);
        i++;
    }
    return sum;
}
