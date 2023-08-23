// 编写一个模板函数 maxValueInArray，接受一个数组和数组的大小，并返回数组中的最大值。
// 【提示】T maxValueInArray(T arr[], int size)

#include <iostream>
using namespace std;

template <typename T>

T maxValueInArray(T arr[], int size)
{
    T tmp = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > tmp)
        {
            tmp = arr[i];
        }
    }
    return tmp;
}

int main()
{
    int arr[10] = {2, 5, 3, 8, 9, 5, 4, 1, 12, 5};
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "max is :" << maxValueInArray(arr, 10) << endl;
    return 0;
}