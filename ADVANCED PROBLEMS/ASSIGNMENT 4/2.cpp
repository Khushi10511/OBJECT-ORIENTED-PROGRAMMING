// 2. WAP to find the volume of a sphere, a cylinder, and a cuboid, using function overloading.
#include <iostream>
using namespace std;
float vol(int, int);
float vol(int, int, int);
float vol(int);

int main()
{
    int r, h, l1, b1, h1, r2;
    cout << "Enter radius and height of a cylinder:";
    cin >> r >> h;
    cout << "Enter length ,breadth and height of cuboid:";
    cin >> l1 >> b1 >> h1;
    cout << "Enter radius of sphere: ";
    cin >> r2;
    cout << "Volume of cylinder is " << vol(r, h);
    cout << "\nVolume of cuboid is " << vol(l1, b1, h1);
    cout << "\nVolume of sphere is " << vol(r2);
    return 0;
}
float vol(int r, int h)
{
    return (3.14 * r * r * h);
}
float vol(int l, int b, int h)
{
    return (l * b * h);
}
float vol(int a)
{
    return ((4.0 / 3.0) * 3.14 * a * a * a);
}