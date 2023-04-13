// Write a program in C++ to count the digits of a given number using recursion.
#include <iostream>
using namespace std;

int digits(int n);

int main()
{
    int n;
    cout << "Enter any number :";
    cin >> n;
    cout << "Total digit are :" << digits(n);
    return 0;
}
int digits(int n)
{
    if (n < 10)
    {
        return 1;
    }
    return 1 + digits(n / 10);
}
