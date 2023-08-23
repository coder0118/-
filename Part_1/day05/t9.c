#include<stdio.h>
int main()
{
  int a,cnt_1=0,cnt_0=0;
  printf("please enter an intger number:\n");
  scanf("%d",&a);
  while(a>0){
  	printf("%d\t",a);
  	if(a%2!=0)
    	  cnt_1++;
    	else
    	  cnt_0++;
  	a/=2;
       }
  	  printf("1 has:%d  0 has:%d\t",cnt_1,cnt_0);
return 0;
}
