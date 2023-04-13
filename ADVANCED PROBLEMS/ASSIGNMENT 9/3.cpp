/*3.WAP to demonstrate the use of pure virtual unction and abstract base class. */
#include <iostream>
using namespace std;

class Base
{
    int x;

public:
    virtual void fun() = 0;
    int getX() { return x; }
};

// This class inherits from Base and implements fun()
class Derived : public Base
{
    int y;

public:
    void fun() { cout << "fun() called"; }
};

int main(void)
{
    Base *b;
    Derived d;
    b=&d;
    b->fun();
    return 0;
}
