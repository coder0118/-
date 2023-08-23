// 创建一个名为 LinkedList 的类，实现链表的基本操作，包括插入节点、删除节点和反转链表等。
// 【提示】单向链表

#include <iostream>

using namespace std;

// 链表节点类
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int val) : val(val), next(nullptr) {}
};

// 链表类
class LinkedList
{
public:
    LinkedList() : head(nullptr), size(0) {}

    // 插入节点
    void insert(int val)
    {
        ListNode *newNode = new ListNode(val);
        if (!head)
        {
            head = newNode;
        }
        else
        {
            ListNode *curr = head;
            while (curr->next)
            {
                curr = curr->next;
            }
            curr->next = newNode;
        }
        size++;
    }

    // 删除节点
    bool remove(int val)
    {
        if (!head)
        {
            return false;
        }
        if (head->val == val)
        {
            ListNode *temp = head;
            head = head->next;
            delete temp;
            size--;
            return true;
        }
        ListNode *curr = head;
        while (curr->next)
        {
            if (curr->next->val == val)
            {
                ListNode *temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
                size--;
                return true;
            }
            curr = curr->next;
        }
        return false;
    }

    // 反转链表
    void reverse()
    {
        if (!head || !head->next)
        {
            return;
        }
        ListNode *prev = nullptr;
        ListNode *curr = head;
        while (curr)
        {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

    // 打印链表
    void print()
    {
        ListNode *curr = head;
        while (curr)
        {
            cout << curr->val << " ";
            curr = curr->next;
        }
        cout << endl;
    }

private:
    ListNode *head;
    int size;
};

int main()
{
    LinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);
    list.print(); // 输出: 1 2 3 4
    list.remove(3);
    list.print(); // 输出: 1 2 4
    list.reverse();
    list.print(); // 输出: 4 2 1
    return 0;
}