//this is the optimal solution for the problem when the array contains only positive integers
//time complexity: O(n)
#include <iostream>
#include <vector>       
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k)//long long is used for storing large sum cause sum can cross int limit,also prevents overflow and is safer for large arrays or big values
{
    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= a[left]; 
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n)
            sum += a[right];
    }
    return maxLen;
}
int main()
{
    vector<int> arr = {2, 1, 7, -4, 2, 1, 3, 4, -15, 2, -3, 6};
    int k = 6;
    cout << "Longest subarray length with sum " << k << ": " << longestSubarrayWithSumK(arr, k) << endl;
    return 0;
}

