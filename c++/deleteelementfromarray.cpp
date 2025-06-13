#include<iostream>
using namespace std;
int main() 
{
    int n, pos;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the position: ";
    cin >> pos;
    if (pos < 1 || pos > n)
     {
        cout << "Wrong position" << endl;
        return 1;
    }
    for (int i = pos - 1; i < n - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "new array after deletion ";
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    return 0;
}
