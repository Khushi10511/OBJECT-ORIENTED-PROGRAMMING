/*2.create a class which stores employee name, ID and salary and derive two from it named regular and part time.
 regular class stores DA HRA and basic salary.part time class stores number of hours and pay per hr. calculate the
 salary of part time and regular employee using virtual function. */
#include <iostream>
using namespace std;

class Employee
{
    string name;
    int id;
    double salary;

public:
    virtual void display_8()
    {
        cout << "No information to show";
    }
};

class Regular : public Employee
{
private:
    double DA;
    double HRA;
    double basic_salary;

public:
    Regular(double d, double h, double b)
    {
        DA = d;
        HRA = h;
        basic_salary = b;
    }
    void display_8()
    {
        cout << "\nSalary of the Regular employee is " << (DA + HRA + basic_salary);
    }
};

class PartTime : public Employee
{
private:
    int number_of_hours;
    double pay_per_hour;

public:
    PartTime(int n, double p)
    {
        number_of_hours = n;
        pay_per_hour = p;
    }
    void display_8()
    {
        cout << "\nSalary of the part-time employee is " << (number_of_hours * pay_per_hour);
    }
};

int main()
{
    Employee *e;

    Regular r(2000, 3000, 10000);
    e = &r;
    e->display_8();

    PartTime p(8, 800);
    e = &p;
    e->display_8();

    return 0;
}
