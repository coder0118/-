// 菱形继承
// B类和C类都继承了A类的funa()方法，
// 当D调用funa()时会有两份，产生歧义

#include <iostream>
using namespace std;


class A
{
public:
    void funa()
    {
        cout << "A" << endl;
    }
};

class B : public A
{
public:
    void funb()
    {
        cout << "B" << endl;
    }
};

class C : public A
{
public:
    void func()
    {
        cout << "C" << endl;
    }
};

class D : public B, public C
{
public:
    void fund()
    {
        cout << "D" << endl;
        // funa(); 产生歧义
    }
};

int main()
{
    D e;
    e.fund();
    return 0;
}