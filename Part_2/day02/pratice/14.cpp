#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    void Init(string name, int age)
    {
        this->name = name;
        if (age > 0 && age < 100)
        {
            this->age = age;
        }
        else
        {
            cout << "error!" << endl;
        }
    }

    void setName(char name)
    {
        this->name = name;
    }
    void getName()
    {
        cout << "name: " << name << endl;
    }

    void setAge(int age)
    {
        if (age > 0 && age < 100)
        {
            this->age = age;
        }
        cout << "error!" << endl;
    }
    void getAge()
    {
        cout << "age: " << age << endl;
    }
};

int main()
{
    Person p1;
    p1.Init("desin", 25);
    p1.getName();
    p1.getAge();
    p1.setAge(999);
    p1.getAge();
    return 0;
}