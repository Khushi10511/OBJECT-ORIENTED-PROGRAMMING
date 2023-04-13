/*4. create a class which stores account number customer name and balance. derive two class from that account
class named saving and current.the saving class stores the minimum balance . current class stores the overdue
amount. Include member function in the appropiate class for deposit money, withdraw and display balance.
Display the data of each class using virtual function*/
#include <iostream>
using namespace std;

class Account
{
public:
    int account_no;
    string customer_name;
    double balance = 0.0;

    virtual void display()
    {
        cout << "No information";
    }

    void deposit()
    {
        int amount;
        cout << "\nEnter amount to deposit: ";
        cin >> amount;
        balance = balance + amount;
    }
};

class Savings : public Account
{
    double min_balance = 500;

public:
    void withdraw()
    {
        int amount;
        cout << "\nEnter amount to withdraw: ";
        cin >> amount;
        if (amount < min_balance)
            cout << "The minimum amount that can be withdrawn is " << min_balance;

        else
            balance = balance - amount;
    }
    void display()
    {
        cout << "\nBalance= " << balance;
    }
};

class Current : public Account
{
private:
    double over_due_amount = 500000;

public:
    void withdraw()
    {
        int amount;
        cout << "\nEnter amount to withdraw: ";
        cin >> amount;
        if (amount > over_due_amount)
            cout << "\nThe maximum amount that can be withdrawn is " << over_due_amount;

        else
            balance = balance - amount;
    }
    void display()
    {
        cout << "\nBalance= " << balance;
    }
};

int main()
{
    Account *a,a1;
    a1.deposit();

    int c;
    cout << "1. Savings\n2. Current\nEnter your choice:";
    cin >> c;

    if (c == 1)
    {
        Savings s;
        a= &s;
        s.withdraw();
        a->display();
    }

    if (c == 2)
    {
        Current c;
        a = &c;
        c.withdraw();
        a->display();
    }

    return 0;
}
