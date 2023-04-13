// Q.2. Write a C++ program to find prime numbers between 1-1000. [Create a prime() function]
#include <iostream>
using namespace std;

int prime(int);

int main()
{
    int flag;
    cout << "PRIME NUMBERS BETWEEN 1 TO 1000 ARE : ";
    for (int i = 1; i <= 1000; ++i)
    {

        flag = prime(i);

        if (flag == 0)
            cout << i << ", ";
    }

    return 0;
}

int prime(int n)
{
    int m, flag = 0, j;
    m = n;
    for (j = 2; j < m; j++)
    {
        flag = 0;
        if (n % j == 0)
        {

            flag = 1;
            break;
        }
    }

    return flag;
}