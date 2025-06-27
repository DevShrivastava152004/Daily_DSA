//this is the optimal solution for the maximum subarray sum problem using Kadane's algorithm
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
long long maxSubarraySum(vector<int>& arr,int n)
{
    long long sum = 0,maxi = INT_MIN;
    for(int i=0;i<n;i++)
{
    sum += arr[i];
    if(sum>maxi)
    {
        maxi = sum;
    }
    if(sum < 0)
    {
        sum = 0;
    }
}
return maxi;
}
int main()
{
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    long long result = maxSubarraySum(arr , arr.size());
    cout<<"Maximum Subarray Sum is: "<< result<<endl;
    return 0;
}