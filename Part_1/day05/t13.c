#include<stdio.h>
int main()
{
	unsigned char a = 0x7F;
	a|=0b10100010;
	a&=0b10110011;
	printf("0x%x\n",a);
return 0;
}
