//this is the optimal solution for finding the leaders in an array
#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
vector<int> SuperiorElements(vector<int>arr)
{
    vector<int>ans;
    int maxi = INT_MIN;
    int n = arr.size();
    for(int i=n-1;i>=0;i--)
    {
        if(arr[i] > maxi)
        {
            ans.push_back(arr[i]);
        }
        maxi=max(maxi,arr[i]);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
    int main()
    {
        vector<int> arr = {16, 17, 4, 3, 5, 2};
        vector<int> result = SuperiorElements(arr);
        cout << "Leaders in the array: ";
        for(int i=0; i<result.size(); i++)
        {
            cout << result[i] << " ";
        }
        cout << endl;
        return 0;
    }