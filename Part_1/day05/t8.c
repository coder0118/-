#include<stdio.h>
int main()
{
  int x=0;
  printf("please enter a int number:\n");
	  scanf("%d",&x);
	  printf("%d:",x);
  for(int i = x;i>0;i--)
  {
    for(int j=i;j>0;j--)
    {
      if(x==i*j)
        printf("%d %d ",i, j);
    }
   }
return 0;
}
