// 创建一个名为 Employee 的类，具有成员变量 name、id 和 salary，
// 以及成员函数 void displayInfo()，用于显示员工的信息。

#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
private:
    char name[32];
    int id;
    float salary;

public:

    void Init(char *names,int id,float salary)
    {
        strcpy(name,names);
        this->id=id;
        this->salary=salary;
    }

    void displayInfo()
    {
        cout<<"员工姓名："<<name<<endl;
        cout<<"员工工号："<<id<<endl;
        cout<<"员工工资："<<salary<<endl;
    }
};

int main()
{
    Employee emp1,emp2;
    emp1.Init("张三",1001,5888.88);
    emp1.displayInfo();
    emp2.Init("李四",1002,6999.99);
    emp2.displayInfo();
    return 0;
}