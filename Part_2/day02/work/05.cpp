// 创建一个名为 BankAccount 的类，
// 具有成员变量 accountNumber 和 balance，
// 以及成员函数 void deposit(double amount) 和
// void withdraw(double amount)，用于存款和取款操作。

#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    double balance;

public:
    void deposit(double amount);
    void withdraw(double amount);
    void Init(int accNum,double blan);
    void show();
};

void BankAccount::show()
{
    cout<<"账户："<<accountNumber<<endl;
    cout<<"余额："<<balance<<endl;
}

void BankAccount::Init(int accNum,double blan)
{
    accountNumber=accNum;
    balance=blan;
}

void BankAccount::deposit(double amount)
{
    balance+=amount;
    cout<<endl;
    cout<<"存款："<<amount<<"元"<<endl;
    cout << endl;
}

void BankAccount::withdraw(double amount)
{
    balance-=amount;
    cout << endl;
    cout<<"取款"<<amount<<"元"<<endl;
    cout << endl;
}
int main()
{
    BankAccount Acc1;
    Acc1.Init(1001,18800);
    Acc1.show();
    Acc1.deposit(300);
    Acc1.show();
    Acc1.withdraw(15603);
    Acc1.show();
    return 0;
}