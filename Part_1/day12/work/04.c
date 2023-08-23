// 编写一个程序，定义一个结构体表示学生的信息，
// 包括姓名、年龄和分数。通过键盘输入学生的信息，然后输出这些信息。
#include <stdio.h>

struct stu
{
    char name[20];
    int age;
    float score;
};

int main(int argc, char const *argv[])
{
    printf("请输入学生姓名、年龄和分数：\n");
    struct stu s1;
    scanf("%s %d %f", s1.name, &s1.age, &s1.score);
    printf("姓名：%s  年龄：%d  成绩：%.2f\n", s1.name, s1.age, s1.score);
    return 0;
}
