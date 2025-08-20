#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool canWePlaceCows(vector<int> &stalls, int dist, int cows)
{
    int n = stalls.size();
    int cntCows = 1;
    int last = stalls[0];
    for(int i= 1;i<n;i++)
    {
        if(stalls[i] - last >= dist)
        {
            cntCows++;
            last = stalls[i];
        }
        if(cntCows >= cows)
        return true;
    }
    return false;
}
int aggressiveCows(vector<int> & stalls, int k)
{
    int n = stalls.size(); 
    sort(stalls.begin(), stalls.end());
    int low = 1, high = stalls[n-1] - stalls[0];
    while( low <= high)
    {
        int mid = (low + high) / 2;
        if(canWePlaceCows(stalls, mid, k) == true)
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
        }
        return high;
    }

    int main()
    {
        vector<int> stalls = {0,3,4,7,10,9};
        int k =4;
        int ans = aggressiveCows(stalls, k);
        cout << "The maximum pssible minimum distance is : " << ans;
        return 0;
    }
    // this is the optiamal solution to the problem of placing cows in stalls with maximum minimum distance.
// The time complexity is O(n log m) where n is the number of stalls and m is the range of distances.
// The space complexity is O(1) as we are using only a constant amount of extra space.