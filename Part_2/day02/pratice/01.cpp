#include<iostream>
using namespace std;

#define x 10

void f1()
{
     int a=100;
    cout<<x<<endl;
}

int main(int argc, char const *argv[])
{
    cout<<x<<endl;

    // cout<<a<<endl;   //报错，从const修饰作用域为函数内

    return 0;
}
