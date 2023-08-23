//带指针的成员变量的结构体
#include<stdio.h>
typedef struct stu
{
    int num;
    char *name;
}STU;

int main(int argc, char const *argv[])
{
    STU s1={1,"hi.struct"};
    printf("%d %s\n",s1.num,s1.name);
    return 0;
}
