/**
 * @file    :01.cpp
 * @brief   :对象函数适配器
 * @author  :zhangjian
 * @version :V1.0.0
 * @date    :2023-08-05
 */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MyPrint : public binary_function<int, int, void>
{
public:
    void operator()(const int &n1, const int &n2) const
    {
        cout << n1 + n2 << endl;
    }

private:
};

int main(int argc, char const *argv[])
{
    int arr[6] = {6, 5, 4, 3, 2, 1};
    vector<int> v1(arr, arr + 6);
    for_each(v1.begin(), v1.end(), bind1st(MyPrint(), 6));
    cout << endl;
    return 0;
}