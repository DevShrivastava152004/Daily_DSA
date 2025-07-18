#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maximumProduct(vector<int>& arr)
{
    int n = arr.size();
    int maxi = INT_MIN;
    for(int i=0;i<n;i++)
    {
        int prod = 1;
        for(int j=i;j<n;j++)
        {
            prod=prod*arr[j];
            maxi = max(maxi,prod);
        }
    }
    return maxi;
}
int main ()
{
 vector<int> arr = {2, 3, -2, 4}; 
    int result = maximumProduct(arr);
    cout << "The maximum product subarray is: " << result << endl;
    return 0;
}