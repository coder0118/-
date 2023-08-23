#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = NULL;
    int i = 1;
    p = a;
    printf("%d\n", *(a + 1));

    printf("%d\n", p - a);
    // 指针可以相减
    printf("%d\n", a[p - a]);
    // 地址
    printf("%p\n", p + i);
    // ==>a[i]
    printf("%d\n", *(&a[i]));

    return 0;
}
