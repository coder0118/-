// 创建一个基类 Person，其中包含一个纯虚函数 display()，
// 用于显示人的信息。从 Person 派生出 Student 类和 Teacher 类，
// 分别实现不同类型人的信息显示。

#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    // 纯虚函数
    virtual void display() = 0;
    virtual ~Person() {}
};

class Student : public Person
{
private:
    string name;
    int sid;
    int age;

public:
    // 带参构造函数
    Student(string name, int sid, int age) : name(name), sid(sid), age(age) {}
    void display()
    {
        cout << name << " " << sid << " " << age << endl;
    }
};

class Teacher : public Person
{
private:
    string tname;
    string tjob;
    int tage;

public:
    // 带参构造
    Teacher(string tname, string tjob, int tage) : tname(tname), tjob(tjob), tage(tage) {}
    void display()
    {
        cout << tname << " " << tjob << " " << tage << endl;
    }
};

int main()
{
    // 多态的实现，父类对象的指针指向子类对象
    Person *p1 = new Student("张三", 1001, 25);
    Person *p2 = new Teacher("desin", "jiaoshou", 18);
    p1->display();
    p2->display();
    delete p1;
    delete p2;
    return 0;
}
