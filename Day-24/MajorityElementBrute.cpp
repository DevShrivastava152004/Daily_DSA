#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
vector<int> majorityElement(vector<int>& nums)
{
    int n = nums.size();
    vector<int> ls;
    for(int i=0;i<n;i++)
    {
        if(ls.size()==0 || ls[0] != nums[i])
    {
        int cnt = 0;
        for(int j=0;j<n;j++)
        if(nums[j] == nums[i])
        cnt++;
        if(cnt > n/3)
        ls.push_back(nums[i]);
    }
    if(ls.size() == 2)
    break;
    }
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
