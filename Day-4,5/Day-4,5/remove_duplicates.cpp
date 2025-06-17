//for sorted arrays
#include <iostream>
using namespace std;
int removeDuplicates(int arr[], int n) 
{
    if (n == 0) return 0;
    int i = 0; 
    for (int j = 1; j < n; j++) 
    {
        if (arr[j] != arr[i])
         {
            i++;
            arr[i] = arr[j];
        }
    }
    return i + 1;
}
int main()
 {
    int n;
    cout << "Enter size of sorted array: ";
    cin >> n;
    int arr[n];
    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int newsize = removeDuplicates(arr, n);
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newsize; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
