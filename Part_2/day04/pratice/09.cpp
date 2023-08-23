// 运算符重载

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
    void show()
    {
        cout << x << endl;
    }
    A *operator+(A &other)
    {
        A *tmp = new A(this->x + other.x);
        return tmp;
    }
};

int main()
{
    A a1(5), a2(6);
    a1.show();
    a2.show();
    A *a3 = a1 + a2;
    a3->show();
    return 0;
}