#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[12] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int *p[4]={NULL};
    int i=0;
    for (int i = 0; i < 4; i++)
    {
        p[i]=&a[i*3];
    }
    printf("%d\n",*p[3]);
    
    return 0;
}
