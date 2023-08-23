#include <stdio.h>
void mul(void *, int, char);
int main(int argc, char const *argv[])
{
    short a = 10;
    int b = 12;
    mul(&a, b, 0);
    printf("%d * %d = %d\n", a, b, a);
    return 0;
}

void mul(void *a, int b, char flag)
{
    switch (flag)
    {
    case 0:
        *((char *)a) *= b;
        break;
    case 1:
        *((short *)a) *= b;
        break;
    case 2:
        *((int *)a) *= b;
        break;
    case 3:
        *((long *)a) *= b;
        break;
    case 4:
        *((float *)a) *= b;
        break;
    case 5:
        (*(double *)a) *= b;
        break;
    default:
        break;
    }
}