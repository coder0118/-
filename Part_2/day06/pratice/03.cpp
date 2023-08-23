// 多态（polymorphism）是面向对象编程中的一个重要概念，指的是不同对象可以对同一消息作出不同的响应。
// 简单来说，就是同一个函数可以根据调用时的对象类型，产生不同的行为。

//     C++ 中实现多态的方式是通过虚函数（virtual function）。
//     当一个成员函数被声明为虚函数时，它可以被子类重写。当使用基类指针或引用调用虚函数时，会根据指针或引用所指对象的实际
//     类型来决定调用哪个子类中的实现。

// 上面的代码定义了一个基类 Shape，以及两个子类 Circle 和 Square，
// 它们都重写了基类的虚函数 draw。在主函数中，创建了两个指针，分别指向 Circle 和 Square 类的实例，
// 并通过这两个指针调用了 draw 函数。由于这两个指针所指对象的实际类型不同，因此调用结果也不同，实现了多态。

//     多态是面向对象编程的重要特性之一，它使得代码更加灵活、可扩展和易维护。
#include<iostream>
using namespace std;

class Shape
{
public:
    // 虚成员函数
    virtual void draw()
    {
        cout << "Drawing a shape." << endl;
    }
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
    Shape *shape1 = new Circle();
    Shape *shape2 = new Square();

    shape1->draw(); // 输出 "Drawing a circle."
    shape2->draw(); // 输出 "Drawing a square."

    delete shape1;
    delete shape2;

    return 0;
}
