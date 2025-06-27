#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxSubarraySum(vector<int>& arr,int n)
{
int maxi = INT_MIN;
for(int i=0;i<arr.size();i++)
{
    for(int j=i;j<arr.size();j++)
    {
        int sum=0;
        for(int k=i;k<=j;k++)
        sum+= arr[k];
        maxi = max(sum,maxi);
    }
}
    return maxi;
}
int main()
{
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    int result = maxSubarraySum(arr , arr.size());
    cout<<"Maximum Subarray Sum is: "<< result<<endl;
    return 0;
}

