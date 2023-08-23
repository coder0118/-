/**
 * @file    :01.cpp
 * @brief   :set按指定范围查找
 * @author  :zhangjian
 * @version :V1.0.0
 * @date    :2023-08-04
 */

#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{
    int m[] = {2, 6, 7, 9, 11, 14, 19, 20, 26, 28, 32};
    set<int> s1(m, m + 11);

    set<int>::const_iterator it = s1.lower_bound(11);
    cout << "大于等于 11 的值：  " << endl;
    for (; it != s1.end(); it++)
    {
        cout << *it << '\t';
    }
    cout << endl;

    it = s1.lower_bound(20);
    set<int>::const_iterator it1 = s1.begin();
    cout << "小于20的值：" << endl;
    while (it1 != it)
    {
        cout << *it1 << '\t';
        it1++;
    }
    cout << endl;
    return 0;
}