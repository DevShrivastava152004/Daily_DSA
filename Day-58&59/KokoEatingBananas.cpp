//this is the brute force solution for Koko Eating Bananas problem
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<cmath>
using namespace std;
//First, we will find the maximum value i.e. max(a[]) in the given array.
int findMax(vector<int>& arr)
{
    int maxi = INT_MIN;
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        maxi = max(maxi,arr[i]);
    }
    return maxi;
}
//For each number i, we will calculate the hours required to consume all the bananas from the pile. We will do this using the function calculateTotalHours(), discussed below.
int CalculateTotalHours(vector<int> & arr,int hourly)
{
    int totalH = 0;
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        totalH += ceil((double)(arr[i]) / (double)(hourly));
    }
    return totalH;
}
int minimumRateToEatBananas(vector<int>& arr,int h)
{
    int maxi = findMax(arr);
    //We will run a loop(say i) from 1 to max(a[]), to check all possible answers.
    for(int i= 1;i<= maxi;i++)
    {
        int reqTime = CalculateTotalHours(arr,i);
        if(reqTime <= h)
        {
            return i; // Return the minimum rate at which Koko can eat bananas
        }
    }
    return maxi; // If no rate is found, return the maximum value
}
int main()
{
    vector<int> arr ={7,15,6,3};
    int h = 8;
    int ans = minimumRateToEatBananas(arr, h);
    cout << "Koko should eat atleast " << ans << " bananas per hour to finish in " << h << " hours. " << endl;
    return 0;
}
//this code has a time complexity of O(n * m) where n is the number of piles and m is the maximum number of bananas in a pile, and the space complexity is O(1) as we are using constant space.