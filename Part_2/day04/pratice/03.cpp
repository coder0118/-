/**
 * @file    :03.cpp
 * @brief   :动态创建对象
 * @author  :zhangjian
 * @version :V1.0.0
 * @date    :2023-08-05
 */

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

class A
{
public:
    A(string name) : name(name) {}
    void show()
    {
        cout << "name" << name << endl;
    }
    void Init(string name)
    {
        this->name = name;
    }
    ~A()
    {
        cout << "析构了 class A" << endl;
    }

private:
    string name;
};

int main(int argc, char const *argv[])
{
    // 1 new 创建 delete 释放
    A *a1 = new A("张三");
    a1->show();
    delete a1;

    // 2 malloc() 创建 free() 释放
    A *a2 = (A *)malloc(sizeof(100));
    a2->Init("李四");
    a2->show();
    a2->~A();
    free(a2);
    return 0;
}