// 编写一个程序，定义一个结构体表示日期，
// 包括年、月和日。编写一个函数，接受两个日期作为参数，
// 并计算并返回它们之间的天数差。
#include <stdio.h>

typedef struct date
{
    int year;
    int month;
    int day;
} DATE;

int days(struct date *d1, struct date *d2)
{
    int month_arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int s_day = 0;
    for (int j = d1->year; j <= d2->year; j++)
    {
        if ((j % 4 == 0 && j % 100 != 0) || j % 400 == 0)
        {
            s_day += 366;
        }
        else
        {
            s_day += 365;
        }
    }
    for (int i = d1->month; i < d2->month; i++)
    {
        s_day += month_arr[i - 1];
    }
    s_day += d2->day - d1->day;

    return s_day;
}

int main(int argc, char const *argv[])
{
    DATE date1;
    DATE date2;
    printf("请输入开始日期：\n");
    scanf("%d %d %d", &date1.year, &date1.month, &date1.day);
    printf("请输入结束日期：\n");
    scanf("%d %d %d", &date2.year, &date2.month, &date2.day);
    printf("-------------\n");
    printf("%d %d %d\n", date1.year, date1.month, date1.day);
    printf("%d %d %d\n", date2.year, date2.month, date2.day);
    int sumdays = days(&date1, &date2);
    printf("总共 %d 天\n", sumdays);
    return 0;
}
