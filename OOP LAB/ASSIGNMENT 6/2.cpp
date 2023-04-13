/*2. Create a class which stores time in hh:mm format. Include all the constructors. The parameterized
constructor should initialize the minute value to zero, if it is not provided.*/
#include <iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;

public:
    Time()
    { // default constructor
        hours = 0;
        minutes = 0;
    }
    Time(int h, int m=0)
    { // parameterized constructor
        hours = h;
        minutes = m;
    }
    void display()
    {
        hours = hours + (minutes/60);
        minutes = minutes % 60;
        cout << "TIME:  ";
        cout << hours << ":" << minutes << endl;
    }
};

int main()
{
    int hours, mins;
    cout << "Enter the value of hours :" << endl;
    cin >> hours;
    cout << "Enter the value of minutes :" << endl;
    cin >> mins;
    Time time1(hours, mins);

    time1.display();

    return 0;
}