/*Q.5. Modify the program 4) to store marks in 10 subjects. Calculate the total marks and
percentage of a student and display it.*/
#include <iostream>
using namespace std;

class student
{
    char name[30];
    int rollNo;
    int marks[10];
    int total;
    float percentage;

public:
    void input(void);
    void output(void);
};

void student::input(void)
{
    int i;
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout<<"Enter marks in 10 subjects ";
    for (i = 0; i < 10; i++)
    {
        cin >> marks[i];
        total = total + marks[i];
    }
}

void student::output(void)
{
    percentage = total / 10.0;
    cout << "Student details:\n";
    cout << "Name:" << name << endl
         << "Roll Number:" << rollNo << endl
         << "Total:" << total<<endl<<"Percentage :"<<percentage;
}

int main()
{
    student std;

    std.input();
    std.output();

    return 0;
}
