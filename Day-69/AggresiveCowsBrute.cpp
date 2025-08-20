#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool canWePlaceCows(vector<int> &stalls, int dist ,int cows)
{
    int n = stalls.size();
    int cntCows = 1;
    int last = stalls[0];
    for(int i =1 ; i< n; i++)
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
int aggresiveCows(vector<int> & stalls,int k)
{
    int n = stalls.size();
    sort(stalls.begin() , stalls.end());
    int limit = stalls[n-1] - stalls[0];
    for(int i =1;i<= limit; i++)
    {
        if(canWePlaceCows(stalls,i,k) == false)
        {
            return (i-1);
        }
    }
    return limit;
}
int main()
{
    vector<int> stalls = {0,3,4,7,10,9};
    int k =4;
    int ans = aggresiveCows(stalls,k);
    cout << "The maximum possible minimum distance is : " << ans;
    return 0;
}
//this is the brute force solution to the problem of placing cows in stalls with maximum minimum distance.
// The time complexity is O(n*m) where n is the number of stalls and m is the range of distances.
// The space complexity is O(1) as we are using only a constant amount of extra