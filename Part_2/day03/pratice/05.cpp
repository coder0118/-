// 深拷贝和浅拷贝
// 浅拷贝
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
    Person(const char *name, int age)
    {
        this->name = (char *)malloc(32);
        strcpy(this->name, name);
        this->age = age;
    }
    void release()
    {
        if (name != NULL)
        {
            free(name);
        }
        cout<<"堆空间已释放!"<<endl;
    }
    void setName(const char *name)
    {
        strcpy(this->name, name);
    }
    void show()
    {
        cout << name << "," << age << endl;
    }
};

int main()
{
    Person p1("desin", 25);
    Person p2 = p1;
    Person p3 = Person(p2);
    p2.setName("ja6ck");

    p1.show();
    p2.show();
    p3.show();

    p3.release();
    return 0;
}