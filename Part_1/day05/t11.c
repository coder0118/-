#include<stdio.h>
int main()
{
	int a,b;
	printf("please enter two int number:\n");
	scanf("%d %d",&a,&b);
	for(int i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			printf("divisor:%d\t",i);
		}
	}
	printf("\n");
	return 0;
 } 
