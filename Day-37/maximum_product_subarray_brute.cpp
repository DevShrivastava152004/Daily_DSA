#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maximumproduct(vector<int>& arr)
{
int maxi = INT_MIN;
int n = arr.size();
for(int i=0;i<n;i++)
{
    for(int j=i;j<n;j++)
{
    int prod = 1;
    for(int k=i;k<j;k++)
    {
        prod = prod*arr[k];
    }
    maxi = max(maxi,prod);
}
}
return maxi;
}
int main ()
{
 vector<int> arr = {2, 3, -2, 4}; // Example input
    int result = maximumproduct(arr);
    cout << "The maximum product subarray is: " << result << endl;
    return 0;
}