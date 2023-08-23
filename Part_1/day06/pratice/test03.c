#include<stdio.h>
int main()
{
    char tea[] = {'d','i','s','e','n'};
    //1
    printf("%s\n",tea);
    //2
    int len = sizeof(tea);
    int a = 0;
    while(a<len){
        printf("%c",tea[a]);
        a++;
    }
    printf("\n");
    //3
    int i=0;
    while (tea[i]!=0)
    {
        printf("%c",tea[i]);
        i++;
    }
    printf("\n");
    return 0;
}