// 请完成以下程序的代码，实现数组的循环迭代：
// template <typename T>
// class Iterator
// {
// private:
//     T *data;
//     int size;
//     int currentIndex;

// public:
//     Iterator(T *d, int s) : data(d), size(s), currentIndex(0) {}
//     T getCurrent()
//     { /* 获取当前元素的代码 */
//     }
//     void next()
//     { /* 迭代器前进的代码 */
//     }
//     void previous()
//     { /* 迭代器后退的代码 */
//     }
// };

// int main()
// {
//     int *p = new int[5]{1, 2, 3, 4, 5};
//     Iterator<int> it(p, 5);
//     while (it.next())
//     {
//         cout << it.getCurrent() << endl;
//     }
// }