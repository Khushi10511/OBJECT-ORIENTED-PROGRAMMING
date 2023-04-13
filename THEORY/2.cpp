// input 2 arrays and merge them
#include <iostream>
using namespace std;
int main()
{
    int a1[50], a2[50], a3[100];
    int m, n, i, k;
    cout << "Enter the Size for First Array: ";
    cin >> m;
    cout << "Enter " << m << " Elements for First Array: ";
    for (i = 0; i < m; i++)
    {
        cin >> a1[i];
        a3[i] = a1[i];
    }
    k = i;
    cout << "\nEnter the Size for Second Array: ";
    cin >> n;
    cout << "Enter " << n << " Elements for Second Array: ";
    for (i = 0; i < n; i++)
    {
        cin >> a2[i];
        a3[k] = a2[i];
        k++;
    }
    cout << "\nThe New Array (Merged Array):\n";
    for (i = 0; i < k; i++)
        cout << a3[i] << " ";
    cout << endl;
    return 0;
}