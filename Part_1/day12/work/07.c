// 编写一个程序，定义一个枚举（enum）表示一周的每一天，
// 包括周一至周日。编写一个函数，接受一个枚举值作为参数，
// 并根据枚举值打印出相应的星期几的名称。例如，传递枚举值为2时，
// 函数应该打印出 "Tuesday"。


#include <stdio.h>

enum weekday
{
    Monday=1,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

void print_weekday(enum weekday day)
{
    switch (day)
    {
    case Monday:
        printf("Monday");
        break;
    case Tuesday:
        printf("Tuesday");
        break;
    case Wednesday:
        printf("Wednesday");
        break;
    case Thursday:
        printf("Thursday");
        break;
    case Friday:
        printf("Friday");
        break;
    case Saturday:
        printf("Saturday");
        break;
    case Sunday:
        printf("Sunday");
        break;
    default:
        printf("Invalid day");
        break;
    }
}

int main()
{
    enum weekday today = 2;
    printf("Today is ");
    print_weekday(today);
    printf("\n");
    return 0;
}