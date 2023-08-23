// 多参数类模板
#include <iostream>
#include <cmath>
using namespace std;

// 有两个类模板参数 T1 T2
template <typename T1, typename T2>
class Point
{
private:
    T1 x;
    T2 y;

public:
    Point(T1 x, T2 y) : x(x), y(y) {}
    int distance(Point<T1, T2> &other)
    {
        return (x - other.x) * (x - other.x) + (y - other.y) * (y - other.y);
    }
};

int main()
{

    Point<float, float> p1(2.32, 6.88);
    Point<float, float> p2(6.35, 2.62);
    cout << sqrt(p1.distance(p2)) << endl;

    Point<int, int> p3(2, 6);
    Point<int, int> p4(8, 12);
    cout << sqrt(p3.distance(p4)) << endl;

    Point<float, int> p5(2.66, 6);
    Point<float, int> p6(8.68, 12);
    cout << sqrt(p5.distance(p6)) << endl;

    return 0;
}