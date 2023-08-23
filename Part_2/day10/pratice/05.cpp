/**
 * @file    :05.cpp
 * @brief   :for_each()
 * @author  :zhangjian
 * @version :V1.0.0
 * @date    :2023-08-04
 */

#include <iostream>
#include <set>
using namespace std;

class Gt5Adapter : public binary_function<int, int, void>
{
public:
    void operator()(const int &n1, const int &n2) const
    {
        if (n1 > n2)
        {
            cout << n1 << endl;
        }
    }
};

int main(int argc, char const *argv[])
{
    int ms[] = {
        2,
        3,
        6,
        9,
        12,
    };
    set<int> s(ms, ms + 5);
    set<int>::iterator it = s.begin();
    return 0;
}