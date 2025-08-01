#include<iostream>
#include<vector>
using namespace std;
int findminimumrotatedsortedarray(vector<int>arr)
{
    int low=0,high = arr.size()-1;
    int ans = INT_MAX;//min dhundhne ke liye INT_MAX se initialize karte hain
    while(low <= high)//this is the base condition for binary search
{
    int mid = (low+high)/2;//this is used to find the middle element
    if(arr[low] <= arr[mid])//if the left part is sorted
    {
        ans = min(ans,arr[low]);// we are storing the minimum element in ans
        low = mid +1;
    }
    else//if the right part is sorted
    {
        high = mid-1;
        ans = min(ans,arr[mid]);
    }
}
return ans;
}
int main()
{
    vector<int> arr {7,8,1,2,3,4,5,6};
    int ans = findminimumrotatedsortedarray(arr);
    cout<<"the minimum element in the rotated sorted array is: "<<ans<<endl;
    return 0;
}
//the time complexity of this code is O(log n) and the space complexity is O(1)