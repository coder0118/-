/**
 * @file    :03.cpp
 * @brief   :函数模板为友元函数
 * @author  :zhangjian
 * @version :V1.0.0
 * @date    :2023-08-05
 */
#include <iostream>

using namespace std;

template <typename T>
T &maxVal(T &a, T &b)
{
    return a > b ? a : b;
}

class A
{
    friend A &maxVal<A>(A &a, A &b);

public:
    A(int x) : x(x) {}
    void show()
    {
        cout << x << endl;
    }

private:
    int x;
};

template <>
A &maxVal(A &a, A &b)
{
    if (a.x > b.x)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main(int argc, char const *argv[])
{
    A a1(20), a2(60);
    A &b = maxVal(a1, a2);
    b.show();
    return 0;
}