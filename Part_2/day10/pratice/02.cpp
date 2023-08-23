/**
 * @file    :02.cpp
 * @brief   :set排序规则
 * @author  :zhangjian
 * @version :V1.0.0
 * @date    :2023-08-04
 */
#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

class MyIntSort
{
public:
    bool operator()(const int &v1, const int &v2)
    {
        return v1 < v2;
    }
};

int main(int argc, char const *argv[])
{
    set<int, MyIntSort> s1;
    s1.insert(6);
    s1.insert(1);
    s1.insert(21);
    s1.insert(66);
    s1.insert(2);
    set<int, MyIntSort>::const_iterator it = s1.begin();
    for (; it != s1.end(); it++)
    {
        cout << *it << "\t";
    }
    cout << endl;
    return 0;
}

