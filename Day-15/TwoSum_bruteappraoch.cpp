#include<iostream>
#include<vector>
using namespace std;
bool TwoSumProblem(vector<int>& arr,int target)
{
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] + arr[j] == target)
            {
                return true ;
            }
        }
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
    bool result = TwoSumProblem(arr,target);
    if(result)
    cout<<"YES,pair exists"<<endl;
    else
    cout<<"No,pair does not exist"<<endl;
    return 0;
    }