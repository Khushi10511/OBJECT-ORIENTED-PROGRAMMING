/*1.create a class shape. derive three class from it named circle , triangle and rectangle.
 find the area of each shape and display it using virtual function.*/
#include <iostream>
using namespace std;
class Shape
{
public:
    double x, y;

    void input(double i, double j = 0)
    {
        x = i;
        y = j;
    }
    virtual void area(void)
    {
        cout << "No area computation defined for this class.\n ";
    }
};

class triangle : public Shape
{
public:
    void area(void)
    {
        cout << "Triangle with height ";
        cout << x << " and base " << y;
        cout << " has an area of ";
        cout << x * 0.5 * y << ".\n";
    }
};

class square : public Shape
{
public:
    void area(void)
    {
        cout << "Square with dimensions ";
        cout << x << "x" << y;
        cout << " has an area of ";
        cout << x * y << ".\n";
    }
};

class circle : public Shape
{
public:
    void area(void)
    {
        cout << "Circle with radius ";
        cout << x;
        cout << " has an area of ";
        cout << 3.14 * x * x;
    }
};

main(void)
{
    Shape *p;
    triangle t;
    square s;
    circle c;

    p = &t;
    p->input(10.0, 5.0);
    p->area();

    p = &s;
    p->input(10.0, 5.0);
    p->area();

    p = &c;
    p->input(9.0);
    p->area();

    return 0;
}