// Write a program in C++ to calculate the sum of numbers from 1 to n using recursion.
#include <iostream>
using namespace std;

int add(int num);

int main()
{
    int num;

    cout << "Enter  a positive integer: ";
    cin >> num;

    cout << "Sum =  " << add(num);

    return 0;
}

int add(int num)
{
    if (num != 0)
    {
        return num + add(num - 1);
    }
    else if (num == 1)
    {
        cout << num;
    }

    return 0;
}