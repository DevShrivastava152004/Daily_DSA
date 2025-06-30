#include<iostream>
#include<vector>
using namespace std;
 bool ls(vector<int>& arr,int target)// this is for linear search
{
    for(int i =0;i<arr.size();i++)
    {
        if(arr[i] == target)
            return true;
        }
        return false;
    }

    int longestConsecutive(vector<int>& arr) // this function finds the longest consecutive sequence in  an array
    {
        int n = arr.size();
        if(n==0)
        return 0;
        int longest = 1;// we took longest as 1 because the min. length of a consecutive sequence is 1
        for(int i=0;i<n;i++)
        {
            int x = arr[i];
            int count  = 1;
            while(ls(arr,x+1))//we will use linear search to check if the next element is present in the array
            {
                x=x+1;// if the next element is present we will increase the value of x
                count ++;//also we will increase the count of the consecutive sequence
            }
            longest  = max(longest,count);//this is to find the maximum length of the consecutive sequence
        }
        return longest;
    }
    int main() 
    {
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    cout << "Longest Consecutive Subsequence Length: " << longestConsecutive(arr) << endl;
    return 0;
 }
//this is the brute force approach to find the longest consecutive sequence in an array
// It has a time complexity of O(n^2) and space complexity of O(1) as we are not using any extra space except for the input array.
// This approach is not efficient for large arrays, but it is simple and easy to understand.