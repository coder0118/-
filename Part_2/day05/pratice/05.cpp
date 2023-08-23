// 虚继承
/*
 * 采用virtual修饰B和C的继承方式，
 * 则只会存在一个共享的A类父对象
*/
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

class B :virtual public A
{
public:
    void funb()
    {
        cout << "B" << endl;
    }
};

class C :virtual public A
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
        funa(); 
    }
};

int main()
{
    D e;
    e.fund();
    return 0;
}