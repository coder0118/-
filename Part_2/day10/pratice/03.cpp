/**
 * @file    :03.cpp
 * @brief   :创建map对象，存储学生学号姓名
 * @author  :zhangjian
 * @version :V1.0.0
 * @date    :2023-08-04
 */

#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const *argv[])
{
    map<int, string> ms;
    ms.insert(pair<int, string>(1, "aaa"));
    ms.insert(map<int, string>::value_type(5, "bbb"));
    ms.insert(make_pair<int, string>(3, "ccc"));
    ms[6] = (6, "ddd");

    map<int, string>::iterator it = ms.begin();
    for (; it != ms.end(); it++)
    {
        cout << (*it).first << '\t' << (*it).second << endl;
    }

    
    return 0;
}