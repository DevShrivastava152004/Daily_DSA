//this is the optimal solution to sort an array of 0's, 1's and 2's by using the Dutch National Flag algorithm.
#include<iostream>
#include<vector>
using namespace std;
void SortArray(vector<int>& arr,int n)
{
    int low =0,mid =0, high = n-1;
    while(mid <= high)
    {
        if(arr[mid] == 0)
    {
        swap(arr[low],arr[mid]);
        low++;
        mid++;
    }
    else if(arr[mid] == 1)
    {
        mid++;
    }
    else if(arr[mid] == 2)
    {
        swap(arr[mid],arr[high]);
        high--;
    }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array - ";
    cin>>n;
    vector<int>arr(n);;
    cout<<"Enter the elements (0's,1's and 2's) - ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    SortArray(arr,n);
    cout<<"Sorted array is - ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}