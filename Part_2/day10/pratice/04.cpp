/**
 * @file    :04.cpp
 * @brief   :算数类内建函数对象
 * @author  :zhangjian
 * @version :V1.0.0
 * @date    :2023-08-04
 */

#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

// 输出所有
void print0(set<int> &s)
{
    set<int>::iterator it = s.begin();
    while (it != s.end())
    {
        cout << *it << '\t';
        it++;
    }
    cout << endl;
}

// 加法仿函数
void print(set<int>::const_iterator start, set<int>::const_iterator end, plus<int> pl, int m)
{
    for (; start != end; start++)
    {
        cout << pl(*start, m) << '\t';
    }
    cout << endl;
}

// 相除仿函数
void print1(set<int>::const_iterator start, set<int>::const_iterator end, divides<int> md, int n)
{
    for (; start != end; start++)
    {
        cout << md(*start, n) << '\t';
    }
    cout << endl;
}
int main(int argc, char const *argv[])
{
    int ms[] = {1, 2, 3, 4, 5, 6};
    set<int> s(ms, ms + 6);
    print0(s);
    print(s.begin(), s.end(), plus<int>(), 20);
    print1(s.begin(), s.end(), divides<int>(), 2);
    return 0;
}