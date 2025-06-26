//this is the better solution of sorting an array of 0's,1's and 2's 
#include<iostream>
#include<vector>
using namespace std;
void sortArray(vector<int>& arr, int n)
{
    int cnt0=0, cnt1 =0 ,cnt2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        cnt0++;
        else if(arr[i]==1)
        cnt1++;
        else if(arr[i]==2)
        cnt2++;
    }
    for(int i=0;i<cnt0;i++)
    arr[i]=0;
    for(int i=cnt0;i<cnt0+cnt1;i++)
    arr[i]=1;
    for(int i=cnt0+cnt1;i<n;i++)
    arr[i]=2;
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
     sortArray(arr,n);
    cout<<"Sorted array is - ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}