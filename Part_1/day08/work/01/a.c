#include"a.h"
int Factorial(int a)
{
    int x;
    x=a;
    while (x>1)
    {
        x--;
        a*=x;
    }
    return a;
}
