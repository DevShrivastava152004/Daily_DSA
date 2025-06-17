#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    cout << arr[i] << " ";
    cout << endl;
}


void insertionSortRecursive(int arr[],int n)
{
    if(n <= 1)
    {
        return;
    }
    insertionSortRecursive(arr, n - 1);
    int last = arr[n-1];
    int j = n-2;
    while( j >= 0 && arr[j] > last)
    {
    arr[j + 1]= arr[j];
    j--;
    }
    arr[j + 1] = last;
    cout << "After inserting element " << last << ": ";
    printArray(arr,n);
}
int main()
{
    int arr[] = {5,3,1,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Original array- ";
    printArray(arr,n);
    insertionSortRecursive(arr, n);
    cout << "\n Final sorted array: ";
    printArray(arr, n);
    return 0;
}
