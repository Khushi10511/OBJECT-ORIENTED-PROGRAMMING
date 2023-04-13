// Q.7. Write a C++ program to dynamically allocate an array of 10 elements and print the sum.
#include <iostream>
using namespace std;

int main()
{
    int *ptr,limit,i,sum=0; 

    cout << "Enter limit of the array: ";
    cin >> limit;

    ptr = (int *)malloc(limit * sizeof(int));

    // read array elements
    for (i = 0; i < limit; i++)
    {
        cout << "Enter element " << i + 1 << ":";
        cin >> *(ptr + i);
    }

    // print array elements
    cout << "Entered array elements are:" << endl;
    for (i = 0; i < limit; i++)
    {
        cout << *(ptr + i) << "\t";
        sum += *(ptr + i);
    }
    cout << endl
         << "Sum of array elements is: " << sum;

    free(ptr);

    return 0;
}
