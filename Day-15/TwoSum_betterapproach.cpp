#include<iostream>
#include<vector>
#include<map>
using namespace std;
bool TwoSum(vector<int>& arr,int target)
{
map<int,int>mpp;
for(int i=0;i<arr.size();i++)
{
    int a = arr[i];
    int more = target - a;
    if(mpp.find(more) != mpp.end())
    return true;
mpp[a]=i;
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
    bool result = TwoSum    (arr,target);
    if(result)
    cout<<"YES,pair exists"<<endl;
    else
    cout<<"No,pair does not exist"<<endl;
    return 0;
    }