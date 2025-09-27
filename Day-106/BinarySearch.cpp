#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> arr,int tar,int st,int end)
{
    if(st <= end)
    {
        int mid = st + (end-st)/2;
        if(arr[mid] == tar)
        {
            return mid;

        }
        else if(arr[mid] <= tar)
        {
        return binarySearch(arr,tar,mid+1,end);
    }
    else{
        return binarySearch(arr,tar,st,mid-1);
    }
}
return -1;
}
int Search(vector<int> arr,int tar)
{
       return  binarySearch(arr,tar,0,arr.size()-1);
}
int main()
{
    vector<int> arr = {2,3,4,5,6,7,8,9};
    int tar = 5;
    cout << Search(arr,tar) << endl;
    return 0;
}