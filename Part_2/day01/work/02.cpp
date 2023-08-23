// 以下程序执行结果是什么？
// int x = 4;
// int main()
// {
//     int x = 20;
//     cout << "x=" << ::x << endl;
// } 4

#include <iostream>
using namespace std;

int x = 4;

int main(int argc, char const *argv[])
{
    int x = 20;
    cout << "x=" << ::x << endl;
    return 0;
}
