// 创建一个名为 Book 的类，具有成员变量 title、author 和 year，
// 以及成员函数 void displayInfo()，用于显示图书的信息。

//     创建Book类的数组，至少存放5本书，并设计全局函数，
//     实现Book对象按year从大到小排序，并显示排序后信息。

// #include <iostream>
// #include <string>
// #define N 5
// using namespace std;

// class Book
// {
// private:
//     string title;
//     string author;

// public:
//     int year;
//     void Init(string title, string author, int year)
//     {
//         this->title = title;
//         this->author = author;
//         this->year = year;
//     }

//     void displayInfo()
//     {
//         cout << "书名：" << title << endl;
//         cout << "作者：" << author << endl;
//         cout << "出版时间：" << year << endl;
//     }
// };

// void NweBook()
// {
//     for (int i = 0; i < N; i++)
//     {
//         Book books[i];
//         books[i].Init("追风筝的人", "阿富汗", 2000 + i);
//     }

//     // 选择排序
//     for (int i = 0; i < N - 1; i++)
//     {
//         for (int j = i + 1; j < N; j++)
//         {

//             if (books[j].year > books[i].year)
//             {
//                 int tmp = books[j].year;
//                 books[j].year = books[i].year;
//                 books[i].year = tmp;
//             }
//         }
//     }

//     for (int i = 0; i < N; i++)
//     {
//         books[i].displayInfo();
//     }
// }

// int main()
// {
//     Book();
//     return 0;
// }

#include <iostream>
#include <string>
#include <algorithm>

class Book
{
private:
    std::string title;
    std::string author;
    int year;

public:
    Book(std::string title, std::string author, int year) : title(title), author(author), year(year) {}
    void displayInfo()
    {
        std::cout << "Title: " << title << "\nAuthor: " << author << "\nYear: " << year << std::endl;
    }

    // 重载小于运算符，用于排序
    bool operator<(const Book &other) const
    {
        return year > other.year;
    }
};

// 按年份从大到小排序并显示书籍信息
void sortBooksByYear(Book *books, int size)
{
    std::sort(books, books + size);
    for (int i = 0; i < size; i++)
    {
        std::cout << "Book " << i + 1 << ":\n";
        books[i].displayInfo();
        std::cout << std::endl;
    }
}

int main()
{
    // 创建Book类的数组
    Book books[] = {
        Book("The Great Gatsby", "F. Scott Fitzgerald", 1925),
        Book("To Kill a Mockingbird", "Harper Lee", 1960),
        Book("1984", "George Orwell", 1949),
        Book("Animal Farm", "George Orwell", 1945),
        Book("Pride and Prejudice", "Jane Austen", 1813)};

    // 排序并显示书籍信息
    sortBooksByYear(books, 5);

    return 0;
}