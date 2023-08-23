// 类模板类外实现
// 类模板的泛型转化为函数模板
#include <iostream>
using namespace std;

// 函数模板
template <typename T>
class Point
{
private:
    T x, y;

public:
    // 类成员函数声明
    Point(T x, T y);
    T mut();
    void show();
};

// 类成员函数实现，将泛型转化为函数模板
template <typename T>
Point<T>::Point(T x, T y)
{
    this->x = x;
    this->y = y;
}

template <typename T>
T Point<T>::mut()
{
    return x * y;
}

template <typename T>
void Point<T>::show()
{
    cout << "x = " << x << ", y = " << y << endl;
}

int main()
{
    Point<int> p1(2,6);
    p1.show();
    cout<<"x * y = "<<p1.mut()<<endl;
    return 0;
}