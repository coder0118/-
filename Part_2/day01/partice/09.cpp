#include <iostream>
using namespace std;

struct S

{
    int id;
    char name[30];
};

int main(int argc, char const *argv[])
{
    S s1={2,"disen"};
    cout<<"id:"<<s1.id<<"   name:"<<s1.name<<endl;
    return 0;
}
