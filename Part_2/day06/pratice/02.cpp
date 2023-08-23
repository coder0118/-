// 多态
// 多态的体现，父类对象的指针指向是子类对象的空间。
// 多态的前提条件：继承 + 重写（重新实现父类的虚函数或纯虚函数）。
#include <iostream>
using namespace std;

class AbsCaculator
{
protected:
    int a, b;

public:
    void setA(int a)
    {
        this->a = a;
    }
    void setB(int b)
    {
        this->b = b;
    }

    virtual int getResult() = 0;
};

// 加法
class addCa : public AbsCaculator
{
    int getResult()
    {
        return a + b;
    }
};

// 减法
class subCa : public AbsCaculator
{
    int getResult()
    {
        return a - b;
    }
};

// 乘法
class mutCa : public AbsCaculator
{
    int getResult()
    {
        return a * b;
    }
};

// 父类对象的指针指向子类对象的空间。
int getResult(AbsCaculator *c, int a, int b)
{
    c->setA(a);
    c->setB(b);
    return c->getResult();
}

int main()
{
    subCa *c1 = new subCa();
    mutCa *c2 = new mutCa();
    cout << getResult(c2, 20, 30) << endl;
    cout << getResult(c1, 10, 20) << endl;

    delete c1;
    return 0;
}