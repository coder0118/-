#include <iostream>
#include <cstring>
using namespace std;

class Student
{
public:
    int sid;
    char name[32];

private:
    float score;

public:
    void show()
    {
        cout << sid << name << score << endl;
    }
    void add(float n);
};

void Student::add(float n)
{
    score = n;
}

int main()
{
    Student stu1;
    Student stu2;
    stu1.sid = 69;
    strcpy(stu1.name, "desin");
    stu1.add(99);
    stu1.show();
    return 0;
}