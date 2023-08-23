// 练习结构体数组排序　　
// 从键盘输入5个学生的信息（姓名、学号、成绩）,
// 存入一个结构体数组中，计算平均分，并按成绩高低排序并输出.
#include <stdio.h>

struct stu
{
    char name[32];
    int sid;
    float score;
};

void cal(struct stu s[])
{
    float sum_sc = 0, avg;
    for (int i = 0; i < 5; i++)
    {
        printf("请输入第%d位同学的信息：(共5位)  姓名  学号  成绩\n", i + 1);
        scanf("%s %d %f", s[i].name, &s[i].sid, &s[i].score);
        sum_sc += s[i].score;
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("第%d位同学信息： %s  %d  %.2f\n", i + 1, s[i].name, s[i].sid, s[i].score);
    }
    printf("\n");
    // 平均成绩
    avg = sum_sc / 5;
    // 冒泡排序算法
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < j - i - 1; j++)
        {
            if (s[j].score > s[j + 1].score)
            {
                struct stu scs = s[j];
                s[j] = s[j + 1];
                s[j + 1] = scs;
            }
        }
    }
    printf("平均成绩：%.2f\n", avg);
    printf("按成绩排序： \n");
    for (int i = 0; i < 5; i++)
    {
        printf(" %.2f  ", s[i].score);
    }
    printf("\n");
}

int main(int argc, char const *argv[])
{
    struct stu stus[5];
    cal(stus);
    return 0;
}
