// // 设计一个模板类 Stack，实现基本的堆栈功能，包括入栈（push）、出栈（pop）、获取栈顶元素（top）和判断栈是否为空（isEmpty）等操作。
// // 【提示】Stack栈结构的特性是FILO(先进后出)

#include <iostream>
using namespace std;

template <typename T>
class Stack
{
private:
    struct Node
    {
        T date;
        Node *next;
        Node(const T &value) : date(value), next(NULL) {}
    };
    Node *head;

public:
    // 构造
    Stack() : head(NULL) {}
    // 入栈
    void push(const T &value)
    {
        Node *new_node = new Node(value);
        new_node->next = head;
        head = new_node;
        cout << "入栈：" << value << endl;
    }
    // 删除栈顶元素（出栈）
    void pop()
    {
        if (head != NULL)
        {
            Node *tmp = head;
            head = head->next;
            delete tmp;
        }
    }
    // 栈顶元素
    T top() const
    {
        if (head != NULL)
        {
            return head->date;
        }
    }
    // 栈是否为空
    bool isEmpty() const
    {
        return head == NULL;
    }
    // 析构
    ~Stack()
    {
        while (head != NULL)
        {
            Node *tmp = head;
            head = head->next;
            delete tmp;
        }
    }
};

int main()
{
    Stack<int> stack;
    if (stack.isEmpty())
    {
        cout << "栈为空！" << endl;
    }

    stack.push(6);
    stack.push(7);
    stack.push(8);
    cout << "栈顶元素：" << stack.top() << endl;
    stack.pop();
    cout << "栈顶元素：" << stack.top() << endl;

    return 0;
}