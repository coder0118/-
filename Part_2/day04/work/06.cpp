// 自定义ArrayList类，实现线性列表（类似数组）结构的数据元素操作。
// 操作方法： 1. add(int) 添加int整型的数据元素
//     2. remove(int) 删除数据元素
//     3. int get(int index) 获取指定位置的元素
//     4. void print() 打印列表中所有元素
//     5. int size() 返回列表的当前大小
//     6. void sort(bool reversed = false) 元素排序，
//     reversed为true时，表示从大小到小，反之，表示从小到到。

#include <iostream>
using namespace std;

const int maxsize = 100;

class ArrayList
{
private:
    int data;
    ArrayList *next;

public:
    ArrayList()
    {
    }
};

int main()
{

    return 0;
}