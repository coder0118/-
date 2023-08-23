// 指针运算符重载

#include <iostream>
using namespace std;

class A
{
private:
    int x;

public:
    explicit A(int x)
    {
        this->x = x;
    }
    void printA()
    {
        cout << "x = " << x << endl;
    }
};

class B
{
private:
    A *mA;

public:
    B(int x)
    {
        mA = new A(x);
    }
    A *operator->()
    {
        return mA;
    }
    A &operator*()
    {
        return *mA;
    }
};

int main()
{
    B b(20);

    b->printA();
    (*b).printA();
    return 0;
}