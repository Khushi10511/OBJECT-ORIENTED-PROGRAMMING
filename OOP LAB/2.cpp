#include <iostream>
#include <string.h>
using namespace std;
template <typename T>
T Min(T a, T b)
{
    T result;
    result = (a < b) ? a : b;
    return (result);
}
int main()
{
    int i, j, k;
    char n, a, b;
    string w, x, y;

    cout << "Enter two integer values :";
    cin >> i >> j;
    cout << "\nEnter two character values : ";
    cin >> a >> b;
    cout << "\nEnter two strings values: ";
    cin >> x >> y;
    
    k = Min<int>(i, j);
    n = Min<char>(a, b);
    w = Min<string>(x, y);

    cout << "Smallest integer is :" << k << endl;
    cout << "Smallest character is :" << n << endl;
    cout << "Smallest string is :" << w;
    return 0;
}
