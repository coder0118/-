#include<stdio.h>
int main()
{
 short n = 112;
 printf("%d\n",n&=~(3<<4));
return 0;
}
