// reverse a no using function concept
#include <iostream>
using namespace std;
int reverse(int n)
{
    int rem, reverse = 0;
    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    return reverse;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Reversed Number: " << reverse(n) << endl;
    return 0;
}
