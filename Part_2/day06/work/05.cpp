// 创建一个基类 Shape，其中包含一个纯虚函数 draw()，用于绘制形状。
// 从 Shape 派生出 Rectangle 类和 Circle 类，分别实现不同形状的绘制方法

#include <iostream>
using namespace std;

class Shape
{
public:
    // 虚成员函数
    virtual void draw()=0;
};

class Circle : public Shape
{
public:
    // 重写基类函数
    void draw()
    {
        cout << "Drawing a circle." << endl;
    }
};

class Square : public Shape
{
public:
    // 重写基类函数
    void draw()
    {
        cout << "Drawing a square." << endl;
    }
};

int main()
{
    // 父类对象的指针指向子类
    Shape *shape1 = new Circle();
    Shape *shape2 = new Square();

    shape1->draw(); // 输出 "Drawing a circle."
    shape2->draw(); // 输出 "Drawing a square."

    delete shape1;
    delete shape2;

    return 0;
}
