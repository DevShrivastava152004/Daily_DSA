#include<iostream>
using namespace std;
int linearSearch(int arr[],int n,int k)//k is the number which has to be searched
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == k)
        return i;
    }
    return -1;//this indicates that the number is not found in the array
}
int main()
{
    int k;
    int n;
    cout<<"Enter the size of the array-";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements-";
    for(int i=0;i<n;i++)
        cin>>arr[i];
        cout<<"Enter the value to search-";
        cin>>k; 
        int index=linearSearch(arr,n,k);
        cout<<"the number is found in index" << index;
        cout<<endl;
        return 0;
}