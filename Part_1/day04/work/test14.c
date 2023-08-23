#include<stdio.h>
int main()
{
    int x_year, x_month, x_day, Sum_day;
    
    printf("please enter today's date:\n");
    scanf("%d %d %d" ,&x_year ,&x_month, &x_day);

    unsigned char num_months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    if((x_year%4==0&&x_year%100!=0)||(x_year%400==0))
    {
	    for(int a = 1; a < x_month; a++)
	    {
            Sum_day += num_months[a];
	    }
	        if(x_month>2)
	        {
	            x_day+=1;
	        }
	        printf("Leap year! Sum day is: %d\n",Sum_day+x_day);
    }else{
	    for(int b = 1;b < x_month;b++)
	    {
	        Sum_day += num_months[b];
        }
	    printf("Ordinary year! Sum day is: %d\n",Sum_day+x_day);
    }
return 0;
}

