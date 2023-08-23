// 【场景】双端队列排序
// 编写一个程序，演示如何使用双端队列对一组整数进行排序。
// 【提示】
// 1) 应用插入排序算法： 从第2个开始，确认当前位置数在前面有序（从小到大或从大到小）队列中的位置。
// 2)  排序函数内，可以先将deque转成vector，并清空deque，然后先压入 vector的第一个元素
// 参数代码：
// void sort(deque<int> &d)
// {
//     vector<int> v(&d.front(), &d.back() + 1);
//     d.clear();
//     d.push_front(v.front()); // 插入第一个元素

//     vector<int>::iterator it = v.begin() + 1;
//     while (it != v.end())
//     {
//         deque<int>::iterator dit = d.begin();
//         int i = 0; // 从头开始查找第一个比当前位置大的数
//         for (; i < d.size(); i++)
//         {
//             if (d.at(i) > *it)
//             {
//                 break;
//             }
//         }
//         d.insert(dit + i, *it);
//         it++;
//     }
// }