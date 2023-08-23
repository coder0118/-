/*编写程序，键盘输入10位学生的成绩，按大到小排序并输出*/
#include <stdio.h>
#include <string.h>
void main()
{
    int ScoArr[10];
    printf("请输入十位学生的成绩：\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ScoArr[i]);
    }

    printf("你输入的成绩为：");
    for (int j = 0; j < 10; j++)
    {
        printf("%d  ", ScoArr[j]);
    }
    printf("\n");
    // 冒泡排序
    int tmp;
    // for (int i = 0; i < 10-1; i++)
    // {
    //     for (int j = 0; j < 10 - i - 1; j++)
    //     {
    //         if (ScoArr[j] < ScoArr[j + 1])
    //         {
    //             tmp = ScoArr[j + 1];
    //             ScoArr[j + 1] = ScoArr[j];
    //             ScoArr[j] = tmp;
    //         }
    //     }
    // }

    for (int i = 0; i < 10 - 1; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (ScoArr[j] < ScoArr[j + 1])
            {
                ScoArr[j] = ScoArr[j] ^ ScoArr[j + 1];
                ScoArr[j + 1] = ScoArr[j] ^ ScoArr[j + 1];
                ScoArr[j] = ScoArr[j + 1] ^ ScoArr[j];
            }
        }
    }

    printf("成绩排序为：");
    for (int k = 0; k < 10; k++)
    {
        printf("%d  ", ScoArr[k]);
    }
}