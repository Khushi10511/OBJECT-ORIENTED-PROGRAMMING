/*3. Extend the program (2) to derive a class ‘result’ from class ‘test’, which includes member
function to calculate total marks and percentage of a student. Input the data for a student and
display its total marks and percentage.*/
#include <iostream>
#include <string>
using namespace std;
class student
{
private:
    string name;
    int roll_no;
    int age;

public:
    void getdata()
    {
        cout << "Enter the name of student:";
        cin >> name;
        cout << "Enter the roll_no of student:";
        cin >> roll_no;
        cout << "Enter the age of the student:";
        cin >> age;
    }
    void display()
    {
        cout << "\n\nName:-" << name;
        cout << "\n\nRoll_No:-" << roll_no;
        cout << "\n\nAge:-" << age << endl
             << endl;
    }
};
class test : public student
{
public:
    int maths;
    int oop;
    int dsa;
    int hse;
    int de;
    void getdata_test()
    {
        getdata();
        cout << "ENter the marks in Maths:";
        cin >> maths;
        cout << "ENter the marks in OOP:";
        cin >> oop;
        cout << "Enter the marks in DSA:";
        cin >> dsa;
        cout << "Enter the marks in HSE:";
        cin >> hse;
        cout << "Enter the marks in DE:";
        cin >> de;
    }
    void display_test()
    {
        cout << "\n\nThe details of the student are:";
        display();
        cout << "Marks in Maths :" << maths << endl
             << endl;
        cout << "Marks in OOP:" << oop << endl
             << endl;
        cout << "Marks in HSE:" << hse << endl
             << endl;
        cout << "Marks in DE:" << de << endl
             << endl;
        cout << "Marks in DSA:" << dsa << endl
             << endl;
    }
};
class result : public test
{
    int tot_marks;
    int percentage;

public:
    void calc_per()
    {

        cout << "\n\nThe total marks is given by:" << maths + oop + hse + de + dsa;
        cout << "\n\nThe percentage is given by:" << (maths + oop + hse + de + dsa) / 5.0;
        ;
    }
};
int main()
{
    test t1;
    t1.getdata_test();
    t1.display_test();
    result r1;
    r1.calc_per();
}