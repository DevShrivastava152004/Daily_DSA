//reversing an array using recursion
#include<iostream>
using namespace std;
void reverse(int i,int arr[],int n)
{
    if(i >= n/2)
    return;
    swap(arr[i],arr[n-i-1]);
    reverse(i+1,arr,n);
}
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    reverse(0,arr,n);
    cout<<"Reveresed array is:";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}