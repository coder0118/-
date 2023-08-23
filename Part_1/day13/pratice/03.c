// 学生信息管理系统
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    char sid[10];
    char name[32];
    char sex[8];
    int age;
    struct student *next;
} STU;


int main(int argc, char const *argv[])
{
    STU s1 = {"1001", "丁俊熙", "男", 18};
    STU *head = &s1;

    scanf("%s %s %s %d", &(head->sid), &(head->name), &(head->sex), &(head->age));
    // scanf("%s %s %s %d", s1.sid, s1.name, s1.sex, s1.age);
    printf("----------%s   %s   %s   %d----------\n", &(head->sid), &(head->name), &(head->sex), head->age);

    return 0;
}
