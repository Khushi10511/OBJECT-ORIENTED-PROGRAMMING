/*2.Create a class which is a complex no.Add 2 objects and display the resultant object.
    Overload the post and pre increament operator for the class.*/
#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0)
    {      
        real = r;
        imag = i;
    }
    friend ostream &operator<<(ostream &out, const Complex &c);
    friend istream &operator>>(istream &in, Complex &c);
    Complex operator++()
    {
        ++real;
        return real;
    }
    Complex operator++(int)
    {
        real++;
        return real;
    }
};

ostream &operator<<(ostream &out, const Complex &c)
{
    out << c.real;
    out << "+" << c.imag << "i" << endl;
    return out;
}

istream &operator>>(istream &in, Complex &c)
{
    cout << "Enter Real Part ";
    in >> c.real;
    cout << "Enter Imaginary Part ";
    in >> c.imag;
    return in;
}

int main()
{
    Complex c1;
    cin >> c1;
    cout << "The complex object is ";
    cout << c1;
    cout << " Post Increamented value is:" << c1++;
    cout << " Pre Increamented value is:" << ++c1;

    return 0;
}
