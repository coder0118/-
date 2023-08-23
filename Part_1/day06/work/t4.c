/*编写程序，扩展第3题，为10位学生输入姓名和课程名，
输出学生名和总成绩、课程名和平均成绩 。*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
    int StuSco[10][5];
    char arr_course_name[3][20];
    char arr_name[10][15];
    int class_1 = 0;
    int class_2 = 0;
    int class_3 = 0;
    int sum_score = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("请输入第%d为同学的姓名：  ",i+1);
        scanf("%s",&arr_name[i][0]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("请输入第%d门课程名：  ", i + 1);
        scanf("%s", &arr_course_name[i][0]);
    }
    

    srand((unsigned)time(NULL));
    // 随机生成[0 100]赋值给10位同学的三门课
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            StuSco[i][j] = rand() % 101;
        }
    }
    // 计算每门课总分及其之和
    for (int i = 0; i < 10; i++)
    {
        StuSco[i][4] = StuSco[i][0] + StuSco[i][1] + StuSco[i][2];
        sum_score += StuSco[i][4];
    }
    // 计算每门课分数之和
    for (int i = 0; i < 10; i++)
    {
        class_1 += StuSco[i][0];
        class_2 += StuSco[i][1];
        class_3 += StuSco[i][2];
    }

    printf(" 学生姓名：");
    for (int i = 0; i < 10; i++)
    {
        printf("%5s ",arr_name[i]);
    }
    printf("\n");
    

    printf("   %s：",arr_course_name[0]);
    for (int i = 0; i < 10; i++)
    {
        printf("%3d  ", StuSco[i][0]);
    }

    printf("  平均成绩：%5d \n", class_1 / 10);

    printf("  %s：", arr_course_name[1]);
    for (int i = 0; i < 10; i++)
    {
        printf("%3d  ", StuSco[i][1]);
    }

    printf("  平均成绩：%5d \n", class_2 / 10);

    printf(" %s：", arr_course_name[2]);
    for (int i = 0; i < 10; i++)
    {
        printf("%3d  ", StuSco[i][2]);
    }

    printf("  平均成绩：%5d \n", class_1 / 10);

    printf("  总成绩：");
    for (int i = 0; i < 10; i++)
    {
        printf("%3d  ", StuSco[i][4]);
    }

    printf("总分平均分：%5d \n", sum_score / 10);
}
