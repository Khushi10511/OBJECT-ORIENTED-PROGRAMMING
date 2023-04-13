// 1. WAP to find the area of a circle, a rectangle, and a triangle, using the concept of function overloading.
#include <iostream>
using namespace std;

float area(float r)
{
    float ar;
    ar = 3.14 * r * r;
    return ar;
}
float area(float l, float b)
{
    float ar;
    ar = l * b;
    return ar;
}
float area(float n, float b, float h)
{
    float ar;
    ar = 0.5 * b * h;
    return ar;
}
int main()
{
    float b, h, r, l;
    float result;

    cout << "\nEnter the Radius of Circle: \n";
    cin >> r;
    result = area(r);
    cout << "\nArea of Circle: " << result << endl;
    cout << "\nEnter the Length & Bredth of Rectangle: \n";
    cin >> l >> b;
    result = area(l, b);
    cout << "\nArea of Rectangle: " << result << endl;
    cout << "\nEnter the Base & Height of Triangle: \n";
    cin >> b >> h;
    result = area(0.5, b, h);
    cout << "\nArea of Triangle: " << result << endl;
    
    return 0;
}
