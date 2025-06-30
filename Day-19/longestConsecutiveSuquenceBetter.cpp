// this is the better version of longest consecutive sequence with the help of sorting and linear search
#include<iostream>//cin/cout
#include<vector>//vector container
#include<algorithm>// sort(),max()
#include<climits>// this is for INT_MIN
using namespace std;
int longestConsecutive(vector<int>& arr)
{
    if(arr.size()==0)
return 0;
int n=arr.size();
sort(arr.begin(),arr.end());
int longest =1;
int cnt = 0;
int lastSmaller = INT_MIN;
for(int i=0;i<n;i++)// we will iterate through the array
{
    if(arr[i]-1 == lastSmaller)// if the current element is one greater than the last smaller element then we will increase the count
    {
    cnt++;
    lastSmaller = arr[i];//if the current element is one greater than the last smaller element then we will update the last smaller element
}
 else if(lastSmaller != arr[i])// if it is not one greater than the last smaller element then we will reset the count to 1 and update the last smaller element
{
    cnt=1;
    lastSmaller = arr[i];
}
longest = max(longest,cnt);
}
return longest;
}
int main()
{
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    cout << "Longest Consecutive Subsequence Length: " << longestConsecutive(arr) << endl;
    return 0;
}