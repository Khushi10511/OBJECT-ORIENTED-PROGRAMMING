// 5. Write a C++ program to calculate the power of any number using recursion.
#include <iostream>
using namespace std;

int Power(int, int);

int main()
{
    int x, y, result;

    cout << "Enter value of x: ";
    cin >> x;

    cout << "Enter value of y: ";
    cin >> y;

    result = Power(x, y);
    cout << x << "^" << y << " = " << result;

    return 0;
}

int Power(int x, int y)
{
    if (y != 0)
        return (x * Power(x, y - 1));
    else
        return 1;
}