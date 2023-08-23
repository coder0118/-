// 使用模板交换数值
#include <iostream>
using namespace std;

template <typename T>
int swapn(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int a = 10, b = 30;
    cout << a << "," << b << endl;
    swapn(a, b);
    cout << a << "," << b << endl;
    return 0;
}