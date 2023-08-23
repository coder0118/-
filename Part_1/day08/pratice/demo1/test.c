#include<stdio.h>
#include"mylib.h"
int main(int argc, char const *argv[])
{
    int a = 10;
    int b=20;
    printf("10+20=%d\n",sum(a,b));
    printf("20-10=%d\n",sub(20,10));
    return 0;
}
