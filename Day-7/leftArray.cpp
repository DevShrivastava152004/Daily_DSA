#include<iostream>
using namespace std;
void leftArray(int arr[], int n)
{
    int temp = arr[0];
    for(int i =1 ;i<n;i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}
int main()
{
        int n;
    cout << "Enter size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter  elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    leftArray( arr,n );
    cout << "After moving the array to the left: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}