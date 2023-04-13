/*2. Create two classes which stores distance in feet, inches and meter, centimeter format
respectively. Write a function which compare  distance in object of these classes and displays
the larger one.*/
#include <iostream>
using namespace std;
class DB;
class DM
{
    float metre, centimetre;

public:
    DM(float m, float c)
    {
        metre = m;
        centimetre = c;
    }
    friend void compare(DM &x, DB &y);
};
class DB
{
    float feet, inches;

public:
    DB(float f, float i)
    {
        feet = f;
        inches = i;
    }
    friend void compare(DM &x, DB &y);
};
void compare(DM &a, DB &b)
{
    int ftm;
    ftm = (b.feet * 30.48) + (b.inches * 2.54);
    int mtm;
    mtm = (a.metre * 100) + a.centimetre;
    if (ftm > mtm)
    {
        cout << "Distance in feet and inches is greater.";
    }
    else if (ftm < mtm)
    {
        cout << "Distance in metre and centimetre is greater.";
    }
    else
    {
        cout << "Both are equal";
    }
}
int main()
{
    int m, cm, ft, in;
    cout << "Enter distance in metre and centimetre: ";
    cin >> m >> cm;
    cout << "Enter distance in feet and inches: ";
    cin >> ft >> in;
    DM a(m, cm);
    DB b(ft, in);
    compare(a, b);
    return 0;
}