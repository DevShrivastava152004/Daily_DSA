//2 pointer approach+Greedy method
#include<iostream>
#include<vector>
#include<algorithm> // for sort
using namespace std;
bool TwoSum(vector<int>& arr,int n,int target)
{
    int left =0,right=n-1;
    sort(arr.begin(),arr.end());
    while(left<right)
    {
        int sum = arr[left] + arr[right];
        if(sum == target)
        {
            return true;
        }
        else if(sum < target)
        left++;
        else
        right--;
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter the size of the array -";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements- ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int target;
    cout<<"Enter the target value- ";
    cin>>target;
    bool result = TwoSum(arr,n,target);
    if(result)
    cout<<"YES,pair exists"<<endl;
    else
    cout<<"No,pair does not exist"<<endl;
    return 0;
    }
    //this is the optimal approach for the TwoSum problem with a time complexity of O(n Log n) due to sorting and O(1) space complexity.