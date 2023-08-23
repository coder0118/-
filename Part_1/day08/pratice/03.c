#include<stdio.h>

int main(int argc, char const *argv[])
{
    short m =20;
    short n =30;
    int  *p = &m;
    printf("%d  %p\n",*p,p);
    return 0;
}
