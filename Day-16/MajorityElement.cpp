#include<iostream>
#include<vector>
using namespace std;
void  majorityElement(vector<int>& arr,int n)
{
    int cnt;
    for(int i=0;i<n;i++)
{
    cnt = 0;
    for(int j=0;j<n;j++)
    {
        if(arr[j] == arr[i])
        {
            cnt++;
        }
        if(cnt > n/2)
        {
            cout<<"Majority Element is: "<< arr[i]<<endl;
            return ;
        }
    }
}
cout<<"no majority element" << endl;
}
int main()
{
    vector<int> arr = {3,2,3};
    majorityElement(arr , arr.size());
    return 0;
}