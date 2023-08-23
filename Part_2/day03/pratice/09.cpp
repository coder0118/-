#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class Person
{
private:
    char *name;
    int age;

public:
    void setName(char *name)
    {
        this->name = name;
    }
    Person(const char *name, int age)
    {
        this->name = (char *)malloc(32);
        this->age = age;
    }
    void show()
    {
        cout << name << "，" << age << endl;
    }

    ~Person(){ }
};

int main()
{
    Person p1("desin", 20);
    Person p2 = p1;
    Person p3 = Person(p2);
    p3.setName("dsscc");
     return 0;
}