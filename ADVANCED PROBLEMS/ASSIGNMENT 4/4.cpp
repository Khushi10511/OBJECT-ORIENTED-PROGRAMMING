// 4. WAP to find the square and cube of a number using an inline function.
#include <iostream>
using namespace std;
class power
{
public:
    inline int square(int n)
    {
        return n * n;
    }
    inline int cube(int n)
    {
        return n * n * n;
    }
};
int main()
{
    int n, r;
    power p;
    cout << "\nEnter a no: \n";
    cin >> n;
    r = p.square(n);
    cout << "\nSquare of " << n << " = " << r << endl;
    r = p.cube(n);
    cout << "\nCube of " << n << " = " << r << endl;
    return 0;
}