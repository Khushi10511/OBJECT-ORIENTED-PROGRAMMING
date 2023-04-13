// Q.3. Write a C++ program to capitalize the first letter of each word of a given string. Words must be separated by only one space.
#include <iostream>
//#include <stdio.h>
#include <string.h>
using namespace std;

int main()
{
    int i;
    char s[30];
    cout << "\nEnter any string :: ";
    gets(s);

    int len = strlen(s);

    for (i = 0; i < len; i++)
    {
        if (i == 0)

            s[i] = toupper(s[i]);

        else

            if (s[i] == ' ')
        {
            s[i+1] = toupper(s[i+1]);
        }
    }
    cout << "\nUpdated New String is :: " << s << "\n";

    return 0;
}