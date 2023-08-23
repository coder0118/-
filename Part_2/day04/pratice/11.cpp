// 重载c++的<<输出流运算符
#include <iostream>
using namespace std;

class A
{
    friend ostream &operator<<(ostream &cout, A &a);
private:
    int x, y;

public:
    A(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};

ostream & operator<<(ostream &cout, A &a)
{
    cout << a.x << "," << a.y ;
    return cout;
}

int main()
{
    A a1(1, 2);
    cout << a1 << endl;
    return 0;
}