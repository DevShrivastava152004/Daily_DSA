#include<iostream>
using namespace std;
int main() {
    int arr[100];
    int n, value, index;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements:- ";
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }
    cout << "Enter the value to insert: ";
    cin >> value;
    cout << "Enter the index where you want to insert (0 to " << n << "): ";
    cin >> index;
    if(index < 0 || index > n) {
        cout << "Invalid index!" << endl;
    }
    for(int i = n; i > index; i--) 
    {
        arr[i] = arr[i-1];
    }
    arr[index] = value;
    n++; 
    cout << "Array after insertion: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
