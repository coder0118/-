// 请完善如下程序：
// class Point
// {
// private:
//     int x, y;

// public:
//     Point(int x, int y);
//     void show()
//     {
//         cout << x << "," << y << endl;
//     }
// };

// int main()
// {
//     Point *p1 = _____[3]{Point(1, 2), Point(2, 3), Point(3, 4)};
//     p1[2]->show();
//     delete ________;
//     return 0;
// }
#include <iostream>

using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void show()
    {
        cout << x << "," << y << endl;
    }
};

int main()
{
    Point *p1 = new Point[3]{Point(1, 2), Point(2, 3), Point(3, 4)};
    p1[2].show();
    delete p1;
    return 0;
}