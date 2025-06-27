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
}// this is the optimal solution for the stock buy and sell problem using a single pass algorithm..basically the idea is to keep track of the minimum price seen so far and calculate the profit at each step by subtracting the minimum pricce from the current price. If the profit is greater than the maximum profit seen so far, we update the maximum profit. We also update the minimum price if the current price is lower than the minimum price seen so far.