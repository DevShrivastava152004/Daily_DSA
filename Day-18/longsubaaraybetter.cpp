#include<iostream>
#include<vector>
#include<map>
using namespace std;
int longestK(vector<int>& arr,int k)
{
    int n = arr.size();
    map<int,int>preSumMap;
    int sum = 0;
    int maxLen = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
        if(sum == k)
            maxLen = max(maxLen,i+1);
        int rem = sum - k;
        if(preSumMap.find(rem) != preSumMap.end())
        {
        int len = i- preSumMap[rem];
        maxLen = max(maxLen,i+1);
        }
    
    if(preSumMap.find(sum) == preSumMap.end())
    preSumMap[sum] = i;
}
return maxLen;
}
int main()
{
    int n,k;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n ; i++)
        cin >> arr[i];
    cout << "Enter the value of k: ";
    cin >> k;

    int result = longestK(arr, k);
    cout << "The length of the longest subarray with sum equal to k is: " << result << endl;

    return 0;
}

