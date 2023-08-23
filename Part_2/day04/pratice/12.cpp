// 重载c++的>>输入流运算符

#include <iostream>
using namespace std;

class A
{
    friend ostream &operator<<(ostream &cout, A &obj);
    friend istream &operator>>(istream &cin, A &obj);
    private:
    string name;
    int salary;

};

ostream &operator<<(ostream &cout, A &obj)
{
    cout<<"name is:"<<obj.name<<"  salary is:"<<obj.salary<<endl;
    return cout;
}

istream &operator>>(istream &cin, A &obj)
{
    cout<<"name ";
    cin>>obj.name;
    cout<<"salary ";
    cin>>obj.salary;
    return cin;
}

int main() {
    A a1;
    cin >> a1;
    cout << a1;
    return 0;
}