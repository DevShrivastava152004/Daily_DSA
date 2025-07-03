#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int findAllSubarrayWithSumK(vector<int>& nums,int k)
{
unordered_map<int,int>mpp;
mpp[0] = 1;
int presum = 0,cnt = 0;
for(int i=0;i<nums.size();i++)
{
    presum += nums[i];
    int remove = presum - k;
    cnt += mpp[remove];
    mpp[presum] += 1;
}
return cnt;
}
int main()
{
    vector<int> arr = {1, 1, 1, 2, 3, 4, 5};
    int k = 5;
    int result = findAllSubarrayWithSumK(arr, k);
    cout << "Number of subarrays with sum " << k << ": " << result << endl;
    return 0;
} 
//this  is the optimal approach to find the number of subarrays with sum k in O(n) time complexity because we are using a hash map to store the prefix sum and its frequency.
// The space complexity is O(n) as well due to the hash map.