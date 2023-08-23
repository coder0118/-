#include<stdio.h>
int main()
{	
	int a, b, m[32], cnt=0;
	printf("please enter a number:\n");
	scanf("%d",&a);
	while(a>0)
	{
	m[cnt]=a%8;
	a/=8;
	cnt++;
	}
	for(int i=cnt-1;i>=0;i--)
	{
	printf("%d",m[i]);
	}
    printf("\n");
return 0;
}
