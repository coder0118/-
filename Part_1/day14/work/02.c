// 按行读取score.txt文件的所有内容，打印成绩及格的学号和成绩。
#include<stdio.h>
#define STU 10
int main(int argc, char const *argv[])
{
    FILE *f=fopen("score.txt","r");
    char s[20];
    for (int i = 0; i < STU; i++)
    {
        fgets(s,20,f);
        printf("%s\n",s);
    }
    fclose(f);
    return 0;
}
