#include <iostream>
using namespace std;
class number
{
public:
    int count;
    number()
    {
        count = 0;
    }
    int operator++()
    {
        ++count;
        return count;
    }
    int operator--()
    {
        --count;
        return count;
    }
};
int main()
{
    number n;
    int c, i, flag;
    cout << "Enter the no of people entering and leaving the bank :" << endl;
    cin >> c;
    for (i = 1; i <= c; i++)
    {
        cout << "\nEnter 1 if the person enters the bank and 0 if the person leaves the bank :";
        cin >> flag;
        if (flag == 1)
            ++n.count;
        else if (flag == 0)
            --n.count;
    }
    cout << "\nThe final value of counter is " << n.count;
    return 0;
}