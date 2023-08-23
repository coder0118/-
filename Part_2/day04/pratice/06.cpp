// const 修饰成员函数与类对象

#include <iostream>
using namespace std;

class A
{
public:
    int x;
    mutable int y;
    void setXy(int x, int y) const
    {
        // this->x=x;
        this->y = y;
    }
    void show()
    {
        cout << x << "," << y << endl;
    }
};

int main()
{
    A a1;
    a1.setXy(1, 3);
    a1.show();

    const A a2 = A();
    a2.setXy(6, 8);
    // a2.show();  
    return 0;
}