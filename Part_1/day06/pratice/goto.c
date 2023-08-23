#include<stdio.h>
int main(){
    int a;
    loop:
    printf("请输入一个整数（二的倍数）：");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("是偶数！\n");
    }else
    {
       goto loop; 
    }
    return 0;
}