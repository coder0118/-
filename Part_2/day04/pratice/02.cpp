/**
 * @file    :02.cpp
 * @brief   :类对象的创建方式：5种
 * @author  :zhangjian
 * @version :V1.0.0
 * @date    :2023-08-05
 */

#include <iostream>
using namespace std;

class Base
{
public:
    Base(int n) : n(n) {}
    void show()
    {
        cout << n << endl;
    }

private:
    int n;
};

class Base1
{
public:
    void show()
    {
        cout << this->n << endl;
    }

private:
    int n;
};

using namespace std;

int main(int argc, char const *argv[])
{
    /*
     * 1 无参
     * 2 带参
     * 3 隐式
     * 4 匿名对象
     * 5 赋值
    */ 
    Base1 base1;
    base1.show();
    Base base2(6);
    base2.show();
    Base base3 = 9;
    base3.show();
    Base(666).show();
    Base base4 = Base(6699);
    base4.show();
    return 0;
}