//this is the optimal solution for rearranging elements by sum when the array contains equal number of positive and  negative elements.
#include<iostream>
#include<vector>
using namespace std;
vector<int> reArrangeArray(vector<int>& nums)
{
    int n=nums.size();
    vector<int> ans(n,0);//ek vector banarhe hai jisme hum rearranged data ko store karenge
    int posIndex=0,negIndex=1;
    for(int i=0;i<n;i++)
    {
        if(nums[i] < 0)
        {
            ans[negIndex] = nums[i];
            negIndex += 2;
        }
        else
        {
            ans[posIndex] = nums[i];
            posIndex +=2;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr = {1, -2, 3, -4, 5, -6};
    reArrangeArray(arr);
    cout << "Rearranged array: ";
    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}