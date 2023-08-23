// 以下程序执行结果是什么？
// int func1(int a, int, int b = 20)
// {
//     return a + b;
// }
// int main()
// {
//     cout << func1(10, 30) << endl;
//     cout << func1(10, 10, 100) << endl;
// } 30 110

#include <iostream>
using namespace std;
int fun1(int a,int ,int b=20)
{
    return a+b;
}
int main()
{
    cout<<fun1(10,30)<<endl;
    cout<<fun1(10,10,100)<<endl;
    return 0;
}