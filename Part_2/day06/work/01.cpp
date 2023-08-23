// 编写一个模板函数 maxValue，接受两个参数，并返回其中较大的值。
// 【提示】T maxVal(T &v1, T &v2)

#include <iostream>
using namespace std;

template <typename T>
T findMax(T &a, T &b)
{
    return a > b ? a : b;
}

int main()
{
    int a = 12, b = 5;
    cout << a << "," << b << endl;
    cout << findMax(a, b) << endl;
    float c = 2.65, d = 6.32;
    cout << c << "," << d << endl;
    cout << findMax(c, d) << endl;
    return 0;
}