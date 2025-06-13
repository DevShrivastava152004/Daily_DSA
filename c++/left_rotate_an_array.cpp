#include<iostream>
using namespace std;
int main() 
{
    int n,k;
    cout << "Enter the size:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        cout << "Enter  elements "<< i + 1<<":";
        cin >> arr[i];
    }
    cout << "Enter k:";
    cin >> k;
    k = k % n; 
    int a[n]; // a is temporary array 
    for (int i = 0; i < n; i++)
     {
        a[i] = arr[(i + k) % n];
    }
    for (int i = 0; i < n; i++)
     {
        arr[i] = a[i];
    }
    cout << "Array after left rotation: ";
    for (int i = 0; i < n; i++)
     {
        cout << arr[i] << " ";
    }
    return 0;
}
