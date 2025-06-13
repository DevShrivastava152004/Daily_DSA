#include <iostream>
using namespace std;
int main()
 {
    int n, position;
    cout << "No of elements: ";
    cin >> n;
    int arr[n];
    cout << "Elements: ";
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    cout << "Position to delete: ";
    cin >> position;
    position = position - 1;
    if (position < 0 || position >= n) 
        cout << "Invalid position" << endl;
        else
        {
    for (int i = position; i < n - 1; i++) 
        arr[i] = arr[i + 1];
    cout << "New array: ";
    for (int i = 0; i < n-1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
