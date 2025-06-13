#include <iostream>
using namespace std;
int main() 
{
    int n, element, pos;
    cout << "Enter the number of elements: ";
    cin >> n;
int arr[n+1]; 
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    cout << "Enter the element to add: ";
    cin >> element;
    cout << "Enter the position?: ";
    cin >> pos;
    for (int i = n; i >= pos; i--)
     {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = element;
    cout<<"the new array is:";
    for (int i = 0; i <= n; i++)
     {
        cout <<arr[i] << " ";
    }
    return 0;
}
