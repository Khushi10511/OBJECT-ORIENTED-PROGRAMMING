/*1. Create a class complex which stores real and imaginary part of a complex number. Include all types of
constructors and destructor. The destructor should display a message about the destructor being
invoked. Create objects using different constructors and display them.*/
#include <iostream>
using namespace std;
class complex
{
    int real, img;

public:
    complex()
    {
        real = 10;
        img = 6;
    }
    complex(int a, int b)
    {
        real = a;
        img = b;
    }
    complex(const complex &x, const complex &y)
    {
        real = x.real;
        img = y.img;
    }
    void display()
    {
        cout << "The number is:\n";
        cout << real << "+" << img << "i" << endl;
    }
    ~complex()
    {
        cout << "Destructor is called" << endl;
    }
};
int main()
{
    complex c1;
    c1.display();
    complex c2(12, 8);
    c2.display();
    complex c3(c1);
    c3.display();
    complex c4(c2);
    c4.display();

    return 0;
}