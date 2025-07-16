#include<iostream>
#include<vector>
using namespace std;
vector<int> CountInversion(vector<int>& arr)
{
    int n=arr.size();
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            cnt++;
        }
    }
    cout<<"the number of inversions are-" << cnt;
}
int main()
{
    vector<int> arr = {5,3,2,4,1};
     CountInversion(arr);
}