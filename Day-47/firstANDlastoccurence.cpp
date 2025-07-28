#include<iostream>
#include<vector>
using namespace std;
int lowerbound(vector<int>& arr,int n,int x)
{
    int low = 0,high = n-1;
    int ans = n;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid]>=x)
        {
            ans = mid;
            high = mid -1 ;
        }
        else {
            low = mid +1;
        }
    }
    return ans;
}
int upperbound(vector<int>& arr,int n,int x)
{
    int low = 0,high = n-1;
    int ans = n;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if(arr[mid] > x)
        {
            ans = mid;
            high = mid -1 ;
        }
        else {
            low = mid +1;
        }
    }
    return ans;
}
pair<int,int> firstandLastOccurence(vector<int>& arr,int n,int k)
{
    int lb = lowerbound(arr, n, k);
    if( lb == n || arr[lb] != k)
    return {-1, -1}; // k not found
    int ub = upperbound(arr, n, k) - 1; // upperbound gives the first index greater than k
    return {lb, ub};
}
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the elements in sorted order:";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cout<<"Enter the element to find its first and last occurrence:";
    cin>>k;
  pair<int,int> result = firstandLastOccurence(arr, n, k);
    if(result.first == -1)
       cout<<"Eelement not found"<<endl;
       else
       cout<<"first occurrence: "<<result.first<<" last occurrence: "<<result.second<< endl;
       return 0;
}