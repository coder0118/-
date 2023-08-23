// 多继承
#include <iostream>
using namespace std;

class A
{
public:
    void fun1()
    {
        cout << "A fun1()" << endl;
    }
};

class B
{
public:
    void fun1()
    {
        cout << "B fun1()" << endl;
    }
    void fun2()
    {
        cout << "B fun2()" << endl;
    }
};

class C : public A, public B
{
};
int main()
{
    C c;
    c.A::fun1();
    c.B::fun1();
    c.fun2();
    return 0;
}