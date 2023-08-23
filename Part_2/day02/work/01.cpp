// 如下程序存在什么错误，请指出并修改正确的。
// int main()
// {
//     const int n = 10;
//     const int &p = n;
//     p++;
//     cout << "n=" << n << endl;
//     return 0;
// } p为常量引用，不可修改自身的值，可以指向其他值

#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int &p = n;
    p++;
    cout << "n=" << n << endl;
    return 0;
}