#include<iostream>
#include<vector>
using namespace std;
int search(vector<int>& arr,int n,int k)
{
    int low =0 ,high = n-1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] == k)
        return mid;
        else if(arr[mid]<k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }   
    return -1; 
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements in sorted order: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int k;
    cout<<"Enter the element to search: ";
    cin>>k;

    int result = search(arr, n, k);
    if(result != -1)
        cout<<"Element found at index: "<<result<<endl;
    else
        cout<<"Element not found in the array."<<endl;

    return 0;
}