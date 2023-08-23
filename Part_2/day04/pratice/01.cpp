// 类的静态成员变量声明与初始化

#include <iostream>
using namespace std;

class A
{
public:
    static int x;
};

int A::x = 23;

int main()
{
    A a1, a2, a3;
    cout<<a1.x<<endl;
    return 0;
}