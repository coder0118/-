// 编写一个名为 Date 的类，表示日期。重载相等运算符 ==，使其能够比较两个日期是否相等。
// 【提示】类中包含year, month, day三个变量。

#include <iostream>
using namespace std;

class Date
{
private:
    int year, month, day;

public:
    Date()
    {
        year = 2023;
        month = 7;
        day = 28;
    }
    Date(int year, int month, int day) : year(year), month(month), day(day) {}
    void show()
    {
        cout << year << " " << month << " " << day << endl;
    }

    // == 运算符重载
    bool operator==(Date &obj)
    {
        if (this->year == obj.year && this->month == obj.month && this->day == obj.day)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    Date date1(2023, 7, 28);
    Date date2;
    if (date1 == date2)
    {
        date1.show();
        date2.show();
        cout << "相等" << endl;
    }
    else
    {
        date1.show();
        date2.show();
        cout << "不相等" << endl;
    }

    return 0;
}