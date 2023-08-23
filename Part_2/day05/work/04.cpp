// 编写一个名为 Complex 的类，表示复数。重载加法运算符 +，使其能够执行两个复数的加法操作。

// (a+bi)+(c+di)=(a+c)+(b+d)i

#include <iostream>
using namespace std;

class Complex
{
private:
    int a;
    int b;

public:
    Complex()
    {
        a = 1;
        b = 1;
    }
    Complex(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void show()
    {
        cout << a << "+" << b << "i" << endl;
    }
    Complex operator+(Complex &obj)
    {
        Complex cos;
        cos.a=this->a+obj.a;
        cos.b=this->b+obj.b;
        return cos;
    }
};

int main()
{
    Complex c1(2, 3);
    Complex c2(3, 7);
    Complex c3 = c1 + c2;
    c1.show();
    c2.show();
    c3.show();
    return 0;
}