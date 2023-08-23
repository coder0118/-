#include<stdio.h>
int main()
{
 int m = 1, n=0;
 m = n++, n++, n++, m++;
 printf("%d %d\n",n,m);
return 0;
}
