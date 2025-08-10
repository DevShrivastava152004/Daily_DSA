// this is the brute force approach for the problem
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
bool possible(vector<int> &arr, int day, int m,int k)// Function to check if it is possible to make m bouquets in given days
{
    int n = arr.size();
    int cnt =0;
    int noOfBouquests = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] <= day)
        {
            cnt++;
        }
        else
        {
            noOfBouquests += (cnt/k);
            cnt = 0;
        }
    }
    noOfBouquests += (cnt/k);
    return noOfBouquests >= m;
}
int roseGarden(vector<int> arr,int k,int m)// Function to find the minimum number of days required to make m bouquets
{
    long long val = m* 1ll * k * 1ll;
    int n = arr.size();
    if(val > n)
    return -1;
    int mini = INT_MAX, maxi = INT_MIN;
    for(int i=0;i<n;i++)
    {
        mini = min(mini,arr[i]);
        maxi = max(maxi, arr[i]);
    }
    for(int i= mini;i<=maxi;i++)
    {
        if(possible(arr,i,m,k))
        {
            return i;
        }
        return -1;
    }
}
    int main()
    {
        vector<int> arr = {7,7,7,7,13,11,12,7};
        int k  =3;
        int m =2;
        int ans = roseGarden(arr, k , m);
        if(ans == -1)
        {
        cout << "We cannot make m bouquets";
        }
        else{ 
        cout<<"We can make m bouquests in " << ans << " days" << endl;
        }return 0;
    }