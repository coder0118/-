// 找出以下程序的bug, 并修正
// int main()
// {
//     const int *a = malloc(20);
//     for (int i = 0; i < 20; i++)
//     {
//         *(a + i) = i;
//     }
//     printf("%d %d\n", a[0], a + 2);
// }
//  const修饰的整型指针a不允许改变
//  a+2为地址-->*(a+2)

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a = malloc(20 * sizeof(int));
    for (int i = 0; i < 20; i++)
    {
        *(a+i) = i;
    }
    printf("%d %d\n", a[0], *(a + 2));
}
