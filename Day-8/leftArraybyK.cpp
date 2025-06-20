#include<iostream>
using namespace std;
void leftArrayByK(int arr[],int n,int k)
{
    k=k%n;
    int temp[k];
    for(int i=0;i<k;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=k;i<n;i++)
    {
        arr[i-k]=arr[i];
    }
    for(int i=0;i<k;i++)
    {
        arr[n-k+i]=temp[i];
    }
}
int main()
{
    int n, k;
    cout << "Enter size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter value of k: ";
    cin >> k;
    leftArrayByK(arr, n, k);
    cout << "After moving the array to the left by " << k << ": ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}