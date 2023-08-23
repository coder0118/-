// 【场景】双端队列操作
//     编写一个程序，演示双端队列（deque）的以下操作：
//     1）在队列的前面插入一个元素。
//     2）在队列的后面插入一个元素。
//     3）从队列的前面删除一个元素。
//     4）从队列的后面删除一个元素。

#include <iostream>
#include <deque>
using namespace std;

void show(deque<int> &q)
{
    deque<int>::const_iterator it = q.begin();
    for(;it!=q.end();it++)
    {
        cout << *it << '\t';
    }
    cout<<endl;
}

int main()
{
    deque<int> q(6, 1);
    show(q);
    q.push_front(9);
    show(q);

    q.push_back(99);
    show(q);

    q.pop_front();
    show(q);

    q.pop_back();
    show(q);

    return 0;
}