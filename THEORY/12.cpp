// WAP to find out the sum of n elements of an integer array a[] by using recursion.
#include <iostream>
using namespace std;
int sum(int arr[], int n)
{
    if (n <= 0)
    {
        return 0;
    }
    return (sum(arr, n - 1) + arr[n - 1]);
}
int main()
{
    int n;
    cout<<"Enter no of array elements :";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the elements of array :";
    for (int i = 0; i < n; i++)
        cin>>arr[i];

    cout<<"SUM= "<< sum(arr, n);
    return 0;
}