// 创建一个名为 Student 的类，具有成员变量 name 和 grade，
// 以及成员函数 void study(char *course)，
// 用于表示某班级的某学生正在学习某一门课程。

#include <iostream>
using namespace std;

class Student
{
private:
    char *name;
    int grade;

public:
    void Init(char *name, int grade)
    {
        this->name = name;
        this->grade = grade;
    }

    void study(char *course)
    {
        cout<<name<<"  "<<grade<<endl;
        cout<<"正在学习："<<course<<endl;
    }
};

int main()
{
    Student s1;
    char *name="张三";
    char *course="C++高级编程";
    s1.Init(name,3);
    s1.study(course);
    return 0;
}