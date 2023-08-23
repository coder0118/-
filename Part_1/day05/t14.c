#include<stdio.h>
int main()
{
	int a,b,c,s=0;
	while(1)
	{
		printf("Please enter your pre-tax income:\n");
		scanf("%d",&a);
		c=a-3500;
		if(c<=0){
			b=0;
			s=a;
			printf("income before tax:%d   tax:%d   take-home pay:%d\n",a,b,s);
		} else if(c>=0&&c<=1500){
			b=c*0.03-0;
			s=a-b;
			printf("income before tax:%d   tax:%d   take-home pay:%d\n",a,b,s);
		}else if(c>1500&&c<=4500){
			b=c*0.1-105;
			s=a-b;
			printf("income before tax:%d   tax:%d   take-home pay:%d\n",a,b,s);
		} else if(c>4500&&c<=9000){
			b=c*0.2-555;
			s=a-b;
			printf("income before tax:%d   tax:%d   take-home pay:%d\n",a,b,s);
		} else if(c>9000&&c<=35000){
			b=c*0.25-1005;
			s=a-b;
			printf("income before tax:%d   tax:%d   take-home pay:%d\n",a,b,s);
		} else if(c>35000&&c<=55000){
			b=c*0.3-2755;
			s=a-b;
			printf("income before tax:%d   tax:%d   take-home pay:%d\n",a,b,s);
		} else if(c>50000&&c<=80000){
			b=c*0.35-5505;
			s=a-b;
			printf("income before tax:%d   tax:%d   take-home pay:%d\n",a,b,s);
		} else {
			b=c*0.45-13505;
			s=a-b;
			printf("income before tax:%d   tax:%d   take-home pay:%d\n",a,b,s);
		}
	}
return 0;
}
