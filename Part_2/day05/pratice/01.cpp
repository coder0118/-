// 字符串类的封装

#include <iostream>
using namespace std;

class A
{
private:
    int x;

public:
    A(int x)
    {
        this->x = x;
    }
    A(A &obj)
    {
        this->x = obj.x;
        cout << "A(A &obj)" << endl;
    }
    A &operator=(A &other)
    {
        this->x = other.x;
        cout << "operator=()" << endl;
    }
    void show()
    {
        cout<<x<<endl;
    }
};

int main()
{
    A a1(100), a2(300);
    A a3 = a1;
    a3.show();
    a3=a2;
    a3.show();
    return 0;
}