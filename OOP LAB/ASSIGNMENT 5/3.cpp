/*Create a class with an integer data member. Include functions for input and output in class.
Count the number of times each function is called and display it*/
#include <iostream>
using namespace std;
class Data
{
    int x;
    int funInput = 0;
    int funOutput = 0;

public:
    void input()
    {
        cout << "\nEnter value of x: ";
        cin >> x;
        funInput++;
    }
    void output()
    {
        cout << "\nValue of x inputted: " << x;
        funOutput++;
    }
    void display()
    {
        cout << "\nThe input function has been used " << funInput << " times." << endl;
        cout << "The output function has been used " << funOutput << " times" << endl;
    }
};
int main()
{
    Data d;
    d.input();
    d.output();
    d.input();
    d.output();
    d.display();
}