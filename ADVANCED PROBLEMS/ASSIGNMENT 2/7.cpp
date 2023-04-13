// Q.7. Create a class which stores x and y coordinates of a point. Calculate length between two given points and display it.
#include <iostream>
#include <math.h>
using namespace std;

class length
{
    int x;
    int y;
    double d;

public:
    void input(void);
    void output(void);
};
void length::input(void)
{
    cout<<"Enter the value of x and y";
    cin >> x >> y;
}
void length::output(void)
{

    d = sqrt(pow(x, 2) + pow(y, 2));
    cout << d << endl;
}

int main()
{
    length std;
    std.input();
    std.output();

    return 0;
}