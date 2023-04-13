// 6.  Write a C++  program for binary search using recursion.
#include <iostream>
using namespace std;

// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binary(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then it can only be present in left subarray
        if (arr[mid] > x)
            return binary(arr, l, mid - 1, x);

        // Else the element can only be present  in right subarray
        return binary(arr, mid + 1, r, x);
    }

    // We reach here when element is not present in array
    return -1;
}

int main(void)
{
    int s;
    cout << "Enter the sixe of array :";
    cin >> s;
    int arr[s];
    cout << "Enter the elements of array :";
    for (int i = 0; i < s; i++)
        cin >> arr[i];
    int x;
    cout << "Enter a value to be searced :";
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binary(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
