#include<stdio.h>
int main()
{
	int x,s=0,a=0,b=1;
	printf("please enter a int nunmber:\n");
	scanf("%d",&x);
	for(int i=0;i<x;i++)
	{
	  s = a + b;
	  b = a;
	  a = s;
	}
	printf("%d\n",s);
return 0;
}
