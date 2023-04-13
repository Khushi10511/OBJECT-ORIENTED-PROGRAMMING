/*Q.6. Create a class complex which stores real and imaginary part of a complex number.
Input 10 complex numbers and display them.*/
#include <iostream>
using namespace std;

class complex
{
    int real[10];
    int imaginary[10];
    int i;

public:
    void input(void);
    void output(void);
};

void complex::input(void)
{
    for (i = 0; i < 10; i++)
    {
        cout << "For number " << i + 1 << endl;
        cout << "Enter real part and imaginary part : ";
        cin >> real[i];
        cin >> imaginary[i];
    }
}

void complex::output(void)
{
    cout << "The complex no's are :" << endl;
    for (i = 0; i < 10; i++)
        cout << "Number " << i + 1 << " : " << real[i] << " + " << imaginary[i] << "i" << endl;
}

int main()
{
    complex std;

    std.input();
    std.output();

    return 0;
}
