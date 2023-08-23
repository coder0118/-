// ++ --运算符的重载

#include <iostream>
using namespace std;

class Num
{
private:
    int n;

public:
    // 无参构造
    Num()
    {
        n = 0;
    }

    // 带参构造
    Num(int n) : n(n) {}

    // 拷贝构造
    Num(Num &other)
    {
        this->n = other.n;
    }

    // 显示函数
    void show()
    {
        cout << n << endl;
    }

    // ++运算符重载(前置)
    Num &operator++()
    {
        ++n;
        return *this;
    }

    // ++运算符重载(后置)
    Num &operator++(int)
    {
        n++;
        return *this;
    }

    // --运算符重载(前置)
    Num &operator--()
    {
        --n;
        return *this;
    }

    // --运算符重载(后置)
    Num &operator--(int)
    {
        // Num tmp(*this);
        n--;
        return *this;
    }
};

int main()
{
    Num n1(6);
    n1.show();
    Num n2 = n1--;
    n2.show();
    n1.show();
    return 0;
}