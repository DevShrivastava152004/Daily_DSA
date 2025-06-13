#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    // Ask the user for the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Create an array of size n
    int arr[n];

    // Ask the user to input elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    } 

    // Calculate the sum of elements in the array
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Output the result
    cout << "The sum of all elements in the array is: " << sum << endl;

    return 0;
}
