// 以下正确的程序段是____c_____.													  
// A) char str[20];                    B) char *p;
// scanf("%s", &str);
// scanf("%s", p);
//  C)char str[20];                    D) char str[20],*p=str;
//  scanf("%s", &str[2]);
//  scanf("%s", p[2]);
#include<stdio.h>
int main(int argc, char const *argv[])
{
    char str[20];
    char *p=str;
    scanf("%s",&str[0]);
    printf("%ld\n",strlen(str));
    printf("%s\n", str[0]);
    scanf("%s", p[2]);
    printf("%s\n", str);

    return 0;
}
