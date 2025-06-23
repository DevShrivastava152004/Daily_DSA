#include<iostream>               
#include<vector>                  
#include<unordered_map>          
using namespace std;
int longestSubarrayWithSumK(vector<int>& nums, int k) 
{
    unordered_map<int, int> m; 
    int prefixSum = 0;  
    int maxLen = 0;     
    for(int i = 0; i < nums.size(); i++) 
    {
        prefixSum += nums[i];
        if(prefixSum == k) 
        {
            maxLen = i + 1; 
        }
        if(m.find(prefixSum - k) != m.end())//iska mtlv prefixSum -k is present in the map
        //agar prefixSum-k map me milgya toh return karta hai uski position
        //agar nhi mila toh return karta hai m.end(it is a special marker for not found) 
        {
            int len = i - m[prefixSum - k]; 
            maxLen = max(maxLen, len);      
        }
        if(m.find(prefixSum) == m.end())
        {
            m[prefixSum] = i;
        }
    }
    return maxLen; 
}

int main()
{
    vector<int> arr = {2,1,7,-4,2,1,3,4,-15,2,-3,6};
    int k = 6;                                    
    cout << "Length of longest subarray with sum " << k << " is: "<< longestSubarrayWithSumK(arr, k);
    return 0;
}
//it's the most optimal approach to find the longest subarray with a given sum k when the array contains both positive and negative integers.
// The time complexity is O(n) and the space complexity is O(n) due to the use of the unordered_map to store prefix sums and their indices.
