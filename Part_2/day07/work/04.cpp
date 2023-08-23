// 设计一个模板类 Queue，实现基本的队列功能，包括入队（enqueue）、出队（dequeue）、获取队首元素（front）和判断队列是否为空（isEmpty）等操作。
// 【提示】Queue队列结构的特性是FIFO(先进先出)

#include <iostream>
using namespace std;

template <typename T>
class Queue
{
private:
    struct Node
    {
        T data;
        Node *next;
        Node(const T &value)
        {
            data = value;
            next = NULL;
        }
    };
    Node *head;

public:
    Queue()
    {
        head = NULL;
    }
    ~Queue()
    {
        while (head != NULL)
        {
            Node *tmp = head;
            head = head->next;
            delete tmp;
        }
    }

    // 入队
    void enqueue(const T value)
    {
        Node *new_node = new Node(value);

        if (head == NULL)
        {
            head = new_node;
        }
        else
        {
            Node *tmp = head;
            while (head->next != NULL)
            {
                head = head->next;
            }
            head = new_node;
            head = tmp;
        }
    }

    // 出队
    void dequeue()
    {
        if (head != NULL)
        {
            Node *tmp = head;
            head = head->next;
            delete tmp;
        }
        else
        {
            cout << "失败！队为空！" << endl;
        }
    }

    // 获取队首元素
    T front()
    {
        if (head != NULL)
        {
            return head->data;
        }
    }
    // 判断队列是否为空
    bool isEmpty()
    {
        if (head == NULL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main(int argc, const char **argv)
{
    Queue<int> queue;

    if (queue.isEmpty())
    {
        cout << "队列为空！" << endl;
    }
    else
    {
        cout << "队列不为空！" << endl;
    }

    queue.enqueue(7);
    queue.enqueue(8);
    queue.enqueue(9);

    cout << "栈顶元素：" << queue.front() << endl;

    queue.dequeue();

    cout << "栈顶元素：" << queue.front() << endl;

    if (queue.isEmpty())
    {
        cout << "队列为空！" << endl;
    }
    else

    {
        cout << "队列不为空！" << endl;
    }
    return 0;
}