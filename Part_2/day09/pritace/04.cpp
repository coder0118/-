// 指定元素以及个数初始化
#include <iostream>
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<int> v1(6, 6);
    std::vector<int>::iterator it = v1.begin();
    while (it != v1.end())
    {
        std::cout << *it << std::endl;
        it++;
    }

    return 0;
}
