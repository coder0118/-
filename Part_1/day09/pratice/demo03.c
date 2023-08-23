#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a = 10, b = 20;
    int *p = &a, *q = &b;
    a += b++;
    printf("a=%d,*p=%d\n", a, *p); // 30,30
    printf("b=%d,*q=%d\n", b, *q); // 21,21
    *q += *p;
    printf("b=%d,*q=%d\n", b, *q); //=>b=b+a 51

    return 0;
}
