// 创建一个基类 Animal，其中包含一个纯虚函数 move()，用于描述动物的移动方式。
// 从 Animal 派生出 Bird 类和 Fish 类，分别实现不同类型动物的移动方式。

#include <iostream>
using namespace std;

class Animal
{
    protected:
    virtual void move()=0;
};

class Bird:public Animal
{
    public:
    void move()
    {
        cout<<"鸟： 飞"<<endl;
    };
};

class Fish:public Animal
{
    public:
    void move()
    {
        cout<<"鱼 游"<<endl;
    }
};

void someAnimal(Animal &animal)
{
    
}
// 设计函数时，父类的引用或指针作为函数（全局函数、某类的成员函数）的参数，
// 调用函数时，传入的子类的对象。

int main() {
    Bird b1;
    b1.move();
    return 0;
}