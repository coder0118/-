#include<stdio.h>
int main()
{
char x_char = 255;
int x_int  = 665;
long int x_long_int = 6335;
float x_float = 6.0f;
double x_double = 8.0;
printf("char %ldB\n",sizeof(x_char));
printf("int %ldB\n",sizeof(x_int));
printf("long int %ldB\n",sizeof(x_long_int));
printf("float %ldB\n",sizeof(x_float));
printf("double %ldB\n",sizeof(x_double));
return 0;
}
