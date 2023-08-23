#include <iostream>
using namespace std;

class A
{
    public:
    int x,y;
    A(int x):x(x){}
    A(int x, int y):x(x),y(y){}
    A(A &other)
    {
        this->x=other.x;
        this->y=other.y;
    }

};

int main() {
    A a(3);
    cout<<a.x<<a.y<<endl;
    A a1(a);
    cout << a1.x << a1.y << endl;
    return 0;
}