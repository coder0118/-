// 设计一个学生类，包括学号、姓名、成绩，并设计接口函数用来输出这些学生数据并计算平均分。并编写main函数进行测试：
//     输出如：
//         学号 姓名 成绩 1 张XX 98 2 王XX 90 3 XXX 89 平均成绩： XX

#include <iostream>
#include <string>

using namespace std;

class Student
{
    int sid;
    string name;
    float score;

public:
    float getScore()
    {
        return score;
    }

    Student(int sid, string name, float score) : sid(sid), name(name), score(score) {}
    void showInfo()
    {
        cout << sid << " " << name << " " << score << endl;
    }
};

void printInfo(Student *stu)
{
    float avg = 0;
    for (int i = 0; i < 3; i++)
    {
        stu[i].showInfo();
        avg += stu[i].getScore();
    }
    cout<<"avgscore="<<avg/3<<endl;
}

int main(int argc, const char **argv)
{
    Student pi[3] = {Student(1001, "张XX", 89.6), Student(1002, "李XX", 99.6), Student(1003, "王XX", 85.1)};
    printInfo(pi);
    return 0;
}