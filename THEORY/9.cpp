// input two arrays and find the odd and even no using switch case
#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the no of elements of array :";
    cin >> n;
    int a[n];
    cout << "\nEnter the elements of array:";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "\nDISPALYING THE OPTIONS ";
    cout << "\n1.FOR EVEN NO'S";
    cout << "\n2.FOR ODD NO'S";
    int choice;
    cout << "\nEnter your choice :";
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "\nThe even no's present are :";
        for (i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                cout << a[i] << " ";
        }
        break;
    }
    case 2:
    {
        cout << "\nThe odd no's present are :";
        for (i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
                cout << a[i] << " ";
        }
        break;
    }
    default:
        cout << "\nWrong choice entered";
        break;
    }
    return 0;
}