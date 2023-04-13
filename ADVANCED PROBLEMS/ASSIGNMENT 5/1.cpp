// 1. WAP to print the largest private data member of three classes.
#include <iostream>
using namespace std;
class X;
class Y;
class Z
{
    int a;

public:
    void input(int n)
    {
        a = n;
    }
    friend void largest(Z & , Y &, X &);                                          
};
class Y
{
    int b;

public:
    void input(int n)
    {
        b = n;
    }
    friend void largest(Z &, Y &, X &);
};
class X
{
    int c;

public:
    void input(int n)
    {
        c = n;
    }
    friend void largest(Z &, Y &, X &);
};
void largest(Z &o1, Y &o2, X &o3)
{
    int large;
    if (o2.b < o1.a && o3.c < o1.a)
        large = o1.a;
    else if (o1.a < o2.b && o3.c < o2.b)
        large = o2.b;
    else
    cout << "Largest No :" << large;
}
int main()
{
    Z s1;
    Y s2;
    X s3;
    int a, b, c;
    cout << "Enter the value of a :";
    cin >> a;
    cout << "Enter the value of b :";
    cin >> b;
    cout << "Enter the valur of c :";
    cin >> c;
    s1.input(a);
    s2.input(b);
    s3.input(c);
    largest(s1, s2, s3);

    return 0;
}