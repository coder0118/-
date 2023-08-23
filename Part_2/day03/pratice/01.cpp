// 构造与析构

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class Animal
{
private:
    char *name;
    char *food;

public:
    Animal();
    Animal(const char *name, const char *food);
    ~Animal();

public:
    void say(const char *word);
    void eat();
};

Animal::Animal()
{
    cout << "无参构造函数构造了对象！" << endl;
    name = (char *)malloc(32);
    food = (char *)malloc(32);
    strcpy(name, "disen");
    strcpy(food, "草");
}

Animal::Animal(const char *name, const char *food)
{
    cout << "带参构造函数构造了对象！" << endl;
    this->name = (char *)malloc(32);
    this->food = (char *)malloc(32);
    strcpy(this->name, name);
    strcpy(this->food, food);
}

void Animal::eat()
{
    cout << name << " 吃: " << food << endl;
}

void Animal::say(const char *word)
{
    cout << name << " 说: " << word << endl;
}

Animal::~Animal()
{
    cout << "析构了对象！" << endl;
}

int main()
{
    Animal cat("小咪", "老鼠");
    Animal dog("大黄", "骨头");

    cat.say("喵喵");
    cat.eat();

    dog.say("汪汪");
    dog.eat();

    Animal person;
    person.eat();
    person.say("hello!");
    return 0;
}