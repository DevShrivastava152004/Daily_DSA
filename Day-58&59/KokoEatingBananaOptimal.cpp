// this is the optimal solution for Koko Eating Bananas problem
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <cmath>
using namespace std;
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
    int low = 1, high = findMax(arr);
    while(low <= high)
    {
        int mid = (low+high)/2;
        int totalH = CalculateTotalHours(arr,mid);
        if(totalH <= h)
        {
            high = mid-1;
        }
        else{
            low = mid+1;
        }
        }
        return low;
    }
    int main()
    {
        vector<int> arr ={7,15,6,3};
        int h = 8;
        int ans = minimumRateToEatBananas(arr, h);
        cout << "Koko should eat at least " << ans << " bananas per hour to finish in " << h << " hours. " << endl;
        return 0;
    }
// this code uses binary search to find the minimum rate at which Koko can eat bananas
// the time complexity of this code is O(n * log(m)) where n is the number of piles and m is the maximum number of bananas in a pile, and the space complexity is O(1) as we are using constant space
//Imp - use long long to avoid overflow in CalculateTotalHours function if the input is large