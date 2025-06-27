#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int stockBuyandSell(vector<int>& arr,int n)
{
    int mini = arr[0];
    int profit =0;
    for(int i=1;i<n;i++)
    {
        int cost = arr[i]-mini;
        profit = max(profit,cost);
        mini = min(mini,arr[i]);
    }
    return profit;
}
int main()
{
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
    int result = stockBuyandSell(v , n);
    cout<<"Maximum Profit is: "<< result << endl;
    return 0;
}