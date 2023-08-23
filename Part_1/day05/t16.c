#include<stdio.h>
int main()
{
	char m[32];
	printf("Please enter a binary string:\n");
	gets(m);
	for(int i=0;i<=5;i++)
	{
	  printf("%s",m[i]);
	}
return 0;
}
