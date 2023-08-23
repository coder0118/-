// 假设有三个类，Animal（动物），Mammal（哺乳动物）和 Dog（狗）。
// Animal 类具有一个成员函数 eat()，用于输出动物吃的食物。
// Mammal 类继承自 Animal 类，并添加了一个成员函数 giveBirth()，用于输出哺乳动物的生育方式。
// Dog 类继承自 Mammal 类，并添加了一个成员函数 bark()，用于输出狗的叫声。
// 请在给定的类定义中完成代码，并实现相应的成员函数。

#include <iostream>
#include <cstring>
using namespace std;

// 动物类
class Animal
{
public:
    void eat(const char *food)
    {
        cout << "吃:" << food << endl;
    }
};

// 哺乳动物类 继承动物类
class Mammal : public Animal
{
public:
    void giveBirth(const char *birth)
    {
        cout << "生育方式：" << birth << endl;
    }
};

// 狗类 继承哺乳动物类
class Dog : public Mammal
{
public:
    // 带参构造
    Dog(const char *name)
    {
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    // 析构
    ~Dog()
    {
        delete[] this->name;
    }

    // 显示名字
    void show()
    {
        cout << "名字:" << name << endl;
    }

    // 显示叫声
    void bark(const char *speak)
    {
        cout << "叫声:" << speak << endl;
    }

private:
    char *name;
};

int main()
{
    Dog dog1("小黄");
    dog1.show();
    dog1.eat("肉");
    dog1.giveBirth("哺乳");
    dog1.bark("汪汪");
    return 0;
}