/*编写程序，随机生成10位学生3门课程成绩，汇总每位学生的总成绩和每门课程的平均成绩。
【提示】随机生成成绩的范围[0, 100]*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int StuSco[10][5];
    int class_1 = 0;
    int class_2 = 0;
    int class_3 = 0;
    int sum_score = 0;

    srand((unsigned)time(NULL));
    //随机生成[0 100]赋值给10位同学的三门课
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            StuSco[i][j] = rand() % 101;
        }
    }
    //计算每门课总分及其之和
    for (int i = 0; i < 10; i++)
    {
        StuSco[i][4] = StuSco[i][0] + StuSco[i][1] + StuSco[i][2];
        sum_score += StuSco[i][4];
    }
    //计算每门课分数之和
    for (int i = 0; i < 10; i++)
    {
        class_1 += StuSco[i][0];
        class_2 += StuSco[i][1];
        class_3 += StuSco[i][2];
    }

    printf("学生编号：1    2    3    4    5    6    7    8    9    10\n");

    printf("   C语言：");
    for (int i = 0; i < 10; i++)
    {
        printf("%-3d  ", StuSco[i][0]);
    }

    printf("  平均成绩：%-3d \n", class_1 / 10);

    printf("操作系统：");
    for (int i = 0; i < 10; i++)
    {
        printf("%-3d  ", StuSco[i][1]);
    }

    printf("  平均成绩：%-3d \n", class_2 / 10);

    printf(" 数据库 ：");
    for (int i = 0; i < 10; i++)
    {
        printf("%-3d  ", StuSco[i][2]);
    }

    printf("  平均成绩：%-3d \n", class_1 / 10);

    printf("  总成绩：");
    for (int i = 0; i < 10; i++)
    {
        printf("%-3d  ", StuSco[i][4]);
    }

    printf("总分平均分：%-3d \n", sum_score / 10);
}