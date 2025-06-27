#include<iostream>
#include<vector>
#include<map>
using namespace std;
int MajorityElement(vector<int>arr)
{
    map<int,int>mpp;
    for(int i=0;i<arr.size();i++)
    {
        mpp[arr[i]]++;//count frequency of each element
    }
    for(auto it:mpp)
    {
        if(it.second > (arr.size()/2))//it.second-->value(frequency)
        {
            return it.first;//it.first-->key(element)
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {3,2,3};
    int result = MajorityElement(arr);
    cout<<"Majaority element is-"<<result;
}






