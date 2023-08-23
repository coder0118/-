/**
 * @file    :04.cpp
 * @brief   :单例模式的实现
 * @author  :zhangjian
 * @version :V1.0.0
 * @date    :2023-08-05
 */
#include <iostream>
using namespace std;

class A
{
private:
    int x;
    // 私有化构造函数和拷贝函数
    A(int x)
    {
        this->x = x;
    }
    A(const A &other)
    {
        x = other.x;
    }

public:
    // 提供公开的静态方法返回类的指针对象
    static A *getInstance(int x = 0)
    {
        if (instance == NULL)
        {
            instance = new A(x);
        }
        return instance;
    }
    void show()
    {
        cout << x << endl;
    }
    // 声明类的指针对象
    static A *instance;
};

A* A::instance = NULL;

int main()
{

    A *a1 = A::getInstance(20);
    a1->show();
    // 无效创建
    A *a2 = A::getInstance(40);
    a2->show();

    cout << a1 << endl;
    cout << a2 << endl;

    delete a1;
    return 0;
}