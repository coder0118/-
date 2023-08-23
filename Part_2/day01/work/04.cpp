// 使用C++ 语言，创建一个FileNode文件单向链表（动态或静态）， 并打印每一个节点信息。
// 【提示】FileNode的结构体中包含文件名，文件大小和指针域。
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

namespace F
{
    typedef struct file
    {
        char *file_name;
        int file_size;
        file *next;
    } FILE;

}

int main(int argc, char const *argv[])
{
    // 创建静态链表
    F::FILE f1 = {"file1", 32};
    F::FILE f2 = {"file2", 42};
    F::FILE f3 = {"file3", 75};
    F::FILE f4 = {"file4", 24};
    F::FILE f5 = {"file5", 673};

    f1.next = &f2;
    f2.next = &f3;
    f3.next = &f4;
    f4.next = &f5;

    F::FILE *pi = &f1;
    // 打印链表
    int i = 0;
    while (pi->next)
    {
        cout << "name: " << pi->file_name;
        cout << "   size:" << pi->file_size << endl;
        pi=pi->next;
    }

    return 0;
}
