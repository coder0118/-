#include <iostream>
using namespace std;

void f1(int a)
{
    cout << "f1(int a)" << endl;
}

void f1(int a, int b)
{
    cout << "f1(int a,int b)" << endl;
}

void f1(int , double)
{
    cout << "f1(int a,int)" << endl;
}

void f1(double a)
{
    cout << "f1(double a)" << endl;
}

int main()
{
    f1(2,6.3);
    return 0;
}