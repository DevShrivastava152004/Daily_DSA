#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> fourSum(vector<int>& nums,int target)// C++ me agar tum body likh rahe ho to semicolon nahi lagate
{
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++)
    {
        if(i>0 && nums[i] == nums[i-1]) 
        continue;
        for(int j=i+1;j<n;j++)
        {
            if(j  != (i+1) && nums[j] == nums[j-1])
            continue;
            int k=j+1;
            int l=n-1;
            while(k<l)
            {
                long long sum = nums[i];
                sum += nums[j];
                sum += nums[k];
                sum += nums[l];
                if(sum == target)
                {
                    vector<int> temp = {nums[i],nums[j],nums[k],nums[l]};
                    k++;
                    l--;
                    while(k<l && nums[k] == nums[k-1])
                    k++;
                    while(k<l && nums[l] == nums[l+1])
                    l--;
                } 
                else if(sum < target)
                k++;
                else
                l--;
            }
        }
    }
    return ans;
}
int main()
{
    int n;
    vector<int> nums;
    cout<<"Enter the size of the element";
    cin>>n;
    cout<<"Enter the elements - ";
    for(int i=0;i<n;i++)
    cin>>nums[i];
    int target;
    cout<<"Enter the target value";
    cin>>target;
    vector<vector<int>> result = fourSum(nums,target);
    cout << "Quadruplets are:" << endl;
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}