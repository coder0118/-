/*若有以下定义，则p+5表示(  a[5] ->666  )
 int  a[10]={0},   *p=a;*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10]={0};
    a[5]=666;
    int *p=a;
    printf("%d\n",*(p+5));
    return 0;
}
