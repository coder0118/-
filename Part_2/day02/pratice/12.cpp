#include <iostream>
using namespace std;

struct Person
{
    int sid;
    int age;
    void show()
    {
        cout<<sid<<","<<age<<endl;
    }
};

int main()
{
    Person p1={12,20};
    p1.show();
    
    return 0;
}