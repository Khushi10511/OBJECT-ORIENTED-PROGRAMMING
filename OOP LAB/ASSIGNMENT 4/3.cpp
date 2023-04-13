/*3. WAP, which displays a given character, n number of times, using a function. When the n value is not provided, it should print the given
character 80 times. When both the character and n value are not provided, it should print ‘*’ character 80 times.
[Write the above program in two ways:-
-using function overloading.
-using default arguments.]*/
/*#include <iostream>
using namespace std;

void def(int n = 80, char c = '*')
{
    for(int i = 1;i <= n;i++)
        cout << c << " ";
}
void def(char c)
{
    for(int i = 1; i <= 80; i++)
        cout << c << " ";
}
int main()
{
    int n;
    char c;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter character: ";
    cin >> c;
    def(n ,c); //normal call
    cout << '\n';
    def(); //default argument
    cout << '\n';
    def(c); //function overloading

    return 0;
}*/
#include <iostream>
using namespace std;
void display(char, int);
void display(char);
void display();
int main()
{
    char a;
    int n;
    cout << "Enter character & number: ";
    cin >> a >> n;
    display(a, n);
    display(a);
    display();
    return 0;
}
void display(char a, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << a << " ";
    }
    cout << endl;
}
void display(char a)
{
    int i;
    for (i = 0; i < 80; i++)
    {
        cout << a << " ";
    }
    cout << endl;
}
void display()
{
    int i;
    for (i = 0; i < 80; i++)
    {
        cout << "* ";
    }
    cout << endl;
}
// Default Arguments

/*#include <iostream>
using namespace std;

void displaychar(char c, int n = 80)
{
    char b = c;
    for (int i = 0; i < n; i++)
    {
        cout << b;
    }
}

void displaystar()
{

    for (int i = 0; i < 80; i++)
    {
        cout << "*";
    }
}

int main()
{
    char a;
    cout << "Enter a character" << endl;
    cin >> a;

    displaychar(a);
    cout << endl;
    displaychar(a, 5);
    cout << endl;
    displaystar();
    cout << endl;
}*/