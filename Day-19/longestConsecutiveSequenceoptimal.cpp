#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int longestSuccessive(vector<int>& a)
{
    int n = a.size();
    if(n==0)
    return 0;
    unordered_set<int> st;//set to store the elements
    for(int i=0;i<n;i++)
    {
        st.insert(a[i]);
    }
    int longest = 1;
    for(auto it:st)
    {
        if(st.find(it-1) == st.end())//check if the element is the start of the sequence
        {
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end())//while the next element is present in the set
            {
                x=x+1;
                cnt++;
            }
            longest = max(longest,cnt);
        }
    }// REMEMBER : If (it-1) is present,then this is not the start of a sequence so we skip it.
    return longest;
}
int main()
{
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    cout << "Longest Consecutive Subsequence Length: " << longestSuccessive(arr) << endl;
    return 0;
}
//therefore,this is the optimal solution to find the longest consecutive sequence in an array
// It has a time complexity of O(n) and space complexity of O(n) as we are using an unordered set to store the elements and space complexity is O(n) in the worst case because we are storing all the elements in the set.