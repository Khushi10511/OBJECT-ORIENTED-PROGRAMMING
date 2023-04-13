// 7. WAP to increment the value of an argument given to the function.
#include <iostream>
using namespace std;
int increament(int n)
{
    return ++n;
}
int main()
{
    int n;
    cout << "Enter a no :";
    cin >> n;
    cout << "Value after increament :" << increament(n);
    return 0;
}