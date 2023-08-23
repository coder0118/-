#include<stdio.h>
int main()
{
  for(int i=0;i<=1000;i++)
  {
    if(i<9)
    {
      if(i*i*i==i)
	{
        printf("%d->%d*%d*%d\n",i,i,i,i);
	}
    }else if(i>=10&&i<100)
   	{
        int a = i/10%10;
        int b = i%10;
       if(i==a*a*a+b*b*b)
	{
        printf("%d->%d*%d*%d+%d*%d*%d\n",i,a,a,a,b,b,b);
	}
    }else{
        int x = i/100%10;
        int y = i/10%10;
        int z = i%10;
       if(i==x*x*x+y*y*y+z*z*z)
	{
	printf("%d->%d*%d*%d+%d*%d*%d+%d*%d*%d\n",i,x,x,x,y,y,y,z,z,z);
        }
    }
 }
return 0;
}
