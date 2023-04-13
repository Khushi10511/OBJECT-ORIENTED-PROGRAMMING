// Write a program in C++ to Print Fibonacci Series using recursion.
#include <iostream>

using namespace std;

int fibonacci(int fib);

int main()
{
    int fib, j;
    cout << "Enter the number :";
    cin >> fib;
    for (int i = 1; i <= fib; i++)
    {
        int result = fibonacci(j);
        cout << result << " ";
        j++;
    }
    return 0;
}
int fibonacci(int fib)
{
    if (fib == 0 || fib == 1)
    {
        return fib;
    }
    else
    {
        return fibonacci(fib - 1) + fibonacci(fib - 2);
    }
}