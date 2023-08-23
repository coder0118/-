#include<iostream>

using namespace std;

int x=100;

int main(int argc, char const *argv[])
{
    int x=200;
    cout<<x<<endl;
    cout<<"局部变量"<<::x<<endl;
    return 0;
}
// ::访问同名的全局变量