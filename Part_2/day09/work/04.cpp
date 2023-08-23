// 【场景】栈操作
//     编写一个程序，演示栈（stack）的以下操作：
//     1）将一个元素压入栈顶。
//     2）从栈顶弹出一个元素。
//     3）获取栈顶元素的值。

#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<int> s;
    s.push(6);
    cout << s.top() << endl;
    s.push(7);
    cout << s.top() << endl;
    s.push(8);
    cout << s.top() << endl;
    s.pop();

    cout << s.top() << endl;
    return 0;
}