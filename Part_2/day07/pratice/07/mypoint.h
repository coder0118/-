#ifndef __MYPOINT_H__
#define __MYPOINT_H__
#include <iostream>
using namespace std;

template <typename T>
class Point
{
private:
    T x, y;

public:
    Point(T x, T y);
    void show();
};

template <typename T>
Point<T>::Point(T x, T y)
{
    this->x = x;
    this->y = y;
}

template <typename T>
void Point<T>::show()
{
    cout << x << " " << endl;
}

#endif