/**
 * @file    :15.cpp
 * @brief   :new 创建数组对象数组
 * @author  :zhangjian
 * @version :V1.0.0
 * @date    :2023-08-05
 */
#include <iostream>

using namespace std;

class A
{
public:
    void show()
    {
        cout << n << '\t';
    }

private:
    int n;
};

class B
{
public:
    B(int n) : n(n) {}
    void show()
    {
        cout << n << '\t';
    }

private:
    int n;
};

int main(int argc, char const *argv[])
{
    // 1 无参构造
    A *p = new A[10];
    for(int i = 0; i < 10; i++)
    {
        p[i].show();
    }
    cout<<endl;

    // 2 带参构造
    B *p1 = new B[3]{B(6),B(5),B(4)};
    for(int i = 0; i < 3; i++)
    {
        p1[i].show();
    }
    cout<<endl;
    return 0;
}