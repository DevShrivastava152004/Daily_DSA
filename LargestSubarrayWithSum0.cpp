#include<iostream>
#include<unordered_map>
using namespace std;
int maxLen(int arr[],int n)
{
    unordered_map<int,int>mpp;
    int maxi = 0;
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
        if(sum == 0)
        {
            maxi = i+1;
        }
        else
        {
            if(mpp.find(sum) != mpp.end())
            {
                maxi = max(maxi, i - mpp[sum]);
            }
            else
            {
                mpp[sum] = i;
            }
        }
    }
    return maxi;
}
int main()
{
    int arr[] = {15, -2, 2, -8, 1, 7, 10, 23};
    int n = sizeof(arr)/sizeof(arr[0]);

    // Function call
    int maxLength = maxLen(arr, n);

    // Output
    cout << "Length of the longest subarray with sum 0 is: " << maxLength << endl;

    return 0;
}