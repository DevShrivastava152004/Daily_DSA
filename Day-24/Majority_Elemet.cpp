//this is another type for the majority element where we have to find elements that occur in the array or the list more than n/3 times
//this is the optimal solution for this problem
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
 vector<int> majorityElement(vector<int>& nums) {
        int cnt1 =0;
        int cnt2=0;
        int el1=INT_MIN;
        int el2=INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(cnt1==0 && el2 != nums[i])
            {
            cnt1=1;
            el1=nums[i];
            }
        else if(cnt2==0 && el1 != nums[i])
        {
            cnt2=1;
            el2=nums[i];
        }
        else if(nums[i] == el1)
        cnt1++;
        else if(nums[i] == el2)
        cnt2++;
        else 
        {
            cnt1--;
            cnt2--;
        }
        }
        vector<int> ls;
        cnt1=0,cnt2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] == el1)
            cnt1++;
            if(nums[i] == el2)
            cnt2++;
        }
        int mini = int(n/3)+1;
        if(cnt1 >= mini)
        ls.push_back(el1);
        if(cnt2 >= mini)
        ls.push_back(el2);
        sort(ls.begin(),ls.end());
        return ls;
    }
int main()
{
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the elements";
    for(int i=0;i<n;i++)
    cin>>nums[i];
    vector<int> result = majorityElement(nums);
    cout<<"The majority elements  (>n/3) are-";
    if(result.empty())
    {
        cout<<"no elements found";
    }
    else {
        for(int i=0;i<result.size();i++)
        cout<<result[i]<<" ";
    }
    return 0;
}