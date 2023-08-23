// 以下程序的输出结果是（C） A）17 B）18 C）19 D）20
//main()
// {
//     int a[] = {2, 4, 6, 8, 10}, y = 1, x = 0, *p = NULL;
//     p = &a[1];
//     for (; x < 3; x++)
//         y += *(p + x);
//     printf(“% d\n”, y);
// }

//1 x=0, *(p+x)==>*(&a[1]+0) ==> y=1+4 5
//2 x=1, *(&a[1]+1)==>6 y=5+6  11;
//3 x=2  *(&a[1]+2)==>8  y=11+8=19    

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[]={2,4,6,8,10},y=1,x=0,*p=NULL;
    p=&a[1];
    for (; x < 3; x++)
    {
        y+=*(p+x);
    }
    printf("%d\n",y);
    return 0;
}
