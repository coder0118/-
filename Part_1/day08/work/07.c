/*以下程序段给数组所有元素输入数据，应在下划线处添入的是（ ）&a[i++]
main( )
    {
    int a[10]={0}, i=0;
    while(i<10) scanf("%d",_____);
    }*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[10]={0},i=0;
    while(i<10)
        scanf("%d",&a[i++]);
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ",a[i]);
    }
    
    
    return 0;
}
