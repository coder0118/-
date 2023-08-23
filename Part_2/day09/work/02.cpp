// 【场景】向量vector求和
// 编写一个函数 sumVector，接受一个整数向量作为参数，并返回向量中所有元素的和。
#include <iostream>
#include <vector>
using namespace std;

int sumVector(vector<int> &vec)
{
    int sum = 0;
    vector<int>::iterator it = vec.begin();
    while (it != vec.end())
    {
        sum += *it;
        it++;
    }
    return sum;
}

int main()
{
    int vec[4] = {255, 128, 6, 66};
    vector<int> v1(vec, vec + 4);
    int result = sumVector(v1);
    cout << result << endl;
    return 0;
}
