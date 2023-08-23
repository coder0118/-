/**
 * @Author: zhangjian
 * @Date: 2023/8/2 15:44:35
 * @LastEditors: Your Name
 * @LastEditTime: 2023/8/5 11:57:35
 * Description: 容器算法迭代器
 */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(int argc, const char** argv) {
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(6);
    v1.push_back(7);

    vector<int>::iterator it;
    for (it=v1.begin(); it !=v1.end(); it++)
    {
        cout<<*it<<endl;
    }
    
    return 0;
}
