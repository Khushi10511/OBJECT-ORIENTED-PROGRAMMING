// WAP to print the details of a customer when his id is entered and also calculate his total expenses.
#include <iostream>
#include <string>
using namespace std;

class Customer
{
public:
    string name;
    int id;
    int no;
    char item[10];
    int expenses[10];
    int i, n;
    int total;
    Customer()
    {
        id = 0;
        n = 0;
        total = 0;
        no = 0;
    }
    void get_data()
    {

        cout << "ENTER CUSTOMER NAME: ";
        getline(cin, name);
        cout << "ENTER ORDER ID :";
        cin >> id;
        cout << "ENTER THE NO OF FOOD ITEMS BOUGHT :";
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cout << "ENTER PRICE OF ITEM " << i + 1 << ":";
            cin >> expenses[i];
        }
        cout << "ENTER CUSTOMER CONTACT NO :";
        cin >> no;
    }

    void display()
    {
        cout << "\n\nCUSTOMER NAME: " << name;
        cout << "\nORDER ID: " << id;

        cout << "\nFOOD ITEMS BOUGHT ARE:";
        for (i = 0; i < n; i++)
        {
            cout << "\nITEM " << i + 1 << ":"
                 << "Rs" << expenses[i];
        }
        cout << "\nTOTAL EXPENSES ARE :" << total;
        cout << "\nCUSTOMER CONTACT NO:" << no;
    }

    void calculate()
    {
        for (i = 0; i < n; i++)
        {
            total = total + expenses[i];
        }
    }
};

int main()
{
    Customer c1;
    c1.get_data();
    c1.calculate();
    c1.display();
}
