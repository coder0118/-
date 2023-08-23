#include<stdio.h>
int main(int argc, char const *argv[])
{
    const int m=10;
    //m=102;
    int *p =&m;
    *p=100;
    printf("%d\n",m);
    return 0;
}
