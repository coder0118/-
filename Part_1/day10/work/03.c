#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = NULL;
    p = a;
    int i = 0;
    //
    //  printf("%p\n", (a + 1));
    // // 数组名首地址为常量不能改变
    // // printf("%p\n", a++);
    // // 地址的地址
    // printf("%p\n", &p+1);

    // printf("%p\n", &p[i]);

    printf("%p\n", a);

    printf("%p\n", &p[i]);

    printf("%p\n", &p);

    return 0;
}
