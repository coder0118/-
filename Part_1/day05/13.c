#include<stdio.h>
int main()
{
	unsigned char a = 0X7F;
	int b;
	b = a|0xA2;
	b = b&0x92;
	printf("%d\n",b); 
return 0;
}
