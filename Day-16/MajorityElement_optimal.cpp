//this is the optimal solution for the majority element problem with the help of Boyer-Moore Voting Alogrithm
#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>& arr)
{
    int cnt =0;
    int el;
    for(int i=0;i<arr.size();i++)
    {
        if(cnt ==0)
        {
            cnt=1;
            el=arr[i];
        }
        else if(arr[i] == el)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }
    }
    int cnt1 =0;// this is to check if the element is really majority element or not because the above code only gives the element which is majority but does not check if it is majority or not
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i] == el)
            cnt1++;
    }
        if(cnt1 > (arr.size()/2))
    {
        return el;
    }
    return -1;
}
int main()
{
    vector<int>arr = {3,2,3};
    int result = majorityElement(arr);
    cout<<"Majority Element is: "<< result<<endl;
    return 0;
}