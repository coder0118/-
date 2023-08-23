// 友元 允许非成员函数、类访问另一个类的私有成员

#include <iostream>
using namespace std;

class B
{
private:
    int x;

public:
    B(int x)
    {
        this->x = x;
    }
    void show()
    {
        cout << x << endl;
    }
    friend void show(B &b); // 将全局函数作为友元
    friend class C;         // 将另一个类作为友元
};

class C
{
public:
    void show(B obj)
    {
        cout << obj.x << endl;
    }
};

void show(B &b)
{
    cout << b.x << endl;
}

int main()
{
    B b(666);
    show(b);
    
    C c;
    c.show(b);
    return 0;
}