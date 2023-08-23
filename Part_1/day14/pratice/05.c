//读取第二行内容
#include<stdio.h>

int main(int argc, char const *argv[])
{
    FILE *f=fopen("a.txt","r");
    int n=0;
    char s[100];
    while (fgetc(f)!='\n')
    {
        n++;
    }
    fseek(f,n+1,0);
    fgets(s,100,f);
    printf("%s",s);
    fclose(f);
    return 0;
}
