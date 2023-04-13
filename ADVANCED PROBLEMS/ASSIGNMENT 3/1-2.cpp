/*Q.1. Create a class Distance that stores a Distance in feet and inch. Input 2 Distance values in
objects, add them, store the resultant Distance in an object and display it.
[Write the above program in two ways.
a) store the resultant Distance in the calling object:C3.add(C1,C2)
b) return the resultant object C3=C1.add(C2)*/
#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    int inches;

public:
    void input()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }
    void output()
    {
        cout << "Distance is feet= " << feet << ", inches= " << inches << endl;
    }
    Distance add(Distance d2)
    {
        Distance d4;
        feet = feet + d2.feet;
        inches = inches + d2.inches;
        d4.feet = feet + (inches / 12);
        d4.inches = inches % 12;
        return d4;
    }
};
int main()
{
    Distance d1, d2, d3;
    d1.input();
    d2.input();
    d1.output();
    d2.output();
    d3 = d1.add(d2);
    d3.output();
    return 0;
}