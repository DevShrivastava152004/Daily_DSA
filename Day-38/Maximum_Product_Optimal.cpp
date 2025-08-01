#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int MaximumProduct(vector<int>& arr,int n)
{
    int prefix=1,suffix=1;
    int ans = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(prefix == 0)
        prefix = 1;
        if(suffix == 0)
        suffix = 1;
        prefix = prefix * arr[i];
        suffix = suffix * arr[n-i-1];
        ans = max(ans,max(prefix,suffix));
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Ente the size of the array";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int answer = MaximumProduct(arr,n);
    cout<<"The maximum product subarray is"<<answer<<endl;
    return 0;

}