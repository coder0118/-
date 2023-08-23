// 如下程序运行的结果是什么 ? 是否存在错误，如果有错请指出并分析原因。

// 没有错误。运行结果为20
// static修饰成员函数时，该函数可直接调用，不需要通过对象调用。
#include<iostream>
using namespace std;

class Abc
{
private:
    int rN;

public:
    Abc(int x) : rN(x) {}
    static void print()
    {
        Abc abc(20);
        cout << abc.rN << endl;
    }
};

int main()
{
    Abc::print();
    return 0;
}

