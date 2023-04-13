/*1.Create a class to store an integer array.Overload the insertion and extraction operator.
    Input and display the array element.*/
#include <iostream>
using namespace std;
class integer
{
public:
    int a[10];
    integer()
    {
    }
    friend ostream &operator<<(ostream &out, const integer &c);
    friend istream &operator>>(istream &in, integer &c);
};
ostream &operator<<(ostream &out, const integer &c)
{
    out << a[i];
    return out;
}
istream &operator>>(istream &in, integer &c)
{
    in >> a[i];
}

int main()
{
    integer arr[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i];
    }
    return 0;
}
