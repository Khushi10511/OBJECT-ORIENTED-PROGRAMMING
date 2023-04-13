// Create a class which stores name, roll number and total marks for a student. Input the data for a student and display it.
#include <iostream>
using namespace std;

class student
{
    char name[30];
    int rollNo;
    int total;

public:

    void input(void);
    void output(void);
};


void student::input(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter total marks outof 500: ";
    cin >> total;
}


void student::output(void)
{
    cout << "Student details:\n";
    cout << "Name:" << name <<endl << "Roll Number:" << rollNo << endl<<"Total:" << total;
}

int main()
{
    student std; 

    std.input();
    std.output();

    return 0;
}
