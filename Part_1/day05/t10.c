#include<stdio.h>
#define pi 3.14
int main()
{
	float r,preimeter,area;
	printf("please enter an radius:\n");
	scanf("%f",&r);
	preimeter = pi*2*r;
	area = pi*r*r;
	printf("r:%.2f  preimeter:%.2f  area:%.2f\n",r,preimeter,area);
	return 0;
 } 
