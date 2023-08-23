// 拷贝函数调用时机

#include <iostream>
using namespace std;


class A
{
    public:
    int x;
    public:
    // 无参构造
    A()
    {
        x=0;
        cout<<this<<" A()"<<endl;
    }
    // 拷贝构造函数
    A(const A &other)
    {
        x=other.x;
        cout<<this<<" A(const A &other)"<<endl;
    }
    // 析构函数
    ~A()
    {
        cout<<this<<" ~A()"<<endl;
    }
};

// 作为函数参数传递
void test1(A a)
{
    cout<<" test() a.x="<<a.x<<endl;
}

// 作为函数返回值
A test2()
{
    A a1;
    a1.x=100;
    return a1;
}

// 作为右值
void test3()
{
    A a2=test2();
    cout<<" a2.x="<<a2.x<<endl;
    cout<<"test3"<<endl;
}

int main() {
    A a0;
    test1(a0);
    test3();
    cout<<"over"<<endl;
    return 0;
}

// （1）当用类的一个对象去初始化该类的另一个对象时，系统会自动调用拷贝构造函数；

// （2）将一个对象作为实参传递给一个非引用类型的形参，系统会自动调用拷贝构造函数；

// （3）从一个返回类为非引用的函数返回一个对象时，系统会自动调用拷贝构造函数；

// （4）用花括号列表初始化一个数组的元素时，系统会自动调用拷贝构造函数。
