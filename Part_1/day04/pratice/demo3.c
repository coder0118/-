#include<stdio.h>
int main()
{
char x1 = 48;
short int x2 = 48;
int x3 = 48;
unsigned int x4 = 48;
long int x5 = 48;
float x6 = 48.0f;
double x7 = 48.0;
printf("char - %c  %ld\n",x1,sizeof(x1));
printf("short - %d %ld\n",x2,sizeof(x2));
printf("int - %d %ld\n",x3,sizeof(x3));
printf("unsigned int - %d %ld\n",x4,sizeof(x4));
printf("long int - %ld %ld\n",x5,sizeof(x5));
printf("float - %f %ld\n",x6,sizeof(x6));
printf("double - %lf %ld\n", x7,sizeof(x7));
return 0;
}
