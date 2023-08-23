/**
 * @file    :16.cpp
 * @brief   :类的静态成员、变量的声明、初始化与访问
 * @author  :zhangjian
 * @version :V1.0.0
 * @date    :2023-08-05
 */

#include <iostream>

using namespace std;

class A
{
public:
    static int n;
};

int A::n=60;

int main(int argc, char const *argv[])
{
    A a1,a2;
    cout<<A::n<<endl;
    A::n=80;
    cout << a1.n << endl;
    cout << a2.n << endl;
    return 0;
}