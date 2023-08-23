/**
 * @Author: zhangjian
 * @Date: 2023/8/3 10:41:51
 * @LastEditors: zhangjian
 * @LastEditTime: 2023/8/3 10:41:51
 * Description: 
 * 1 将第一次出现位置和最后一次出现位置删除或用空格替换
 */


#include <iostream>
using namespace std;



int main() {
    

    string s1;

    s1.append("hello world");

    int is_start = s1.size();

    cout<<is_start<<endl;
    
    s1.erase(is_start);
    return 0;
}