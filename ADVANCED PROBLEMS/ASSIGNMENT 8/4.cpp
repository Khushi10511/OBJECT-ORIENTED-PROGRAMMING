/*4.WAP  to add two objects of class time.Overload the operator == to compare 2 objects and 
display whether they're equal or not*/
#include<iostream>
using namespace std;
class Time
{
    public:
    int hours,minutes;
    Time()
    {}
    Time(int h,int m)
    {
        hours=h;
        minutes=m;
    }
    Time operator +(Time d)
    {
        Time y;
        y.minutes=minutes+d.minutes;
        y.hours=hours+d.hours;
        return y;  
    }
};
void main()
{
    Time A(5,30),B(2,40);x
    cout<<" The greater value between two times is"<<A+B;

}