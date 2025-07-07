#include <vector>
#include<iostream>
#include <algorithm>
using namespace std;
    vector<vector<int>> threeSum(vector<int>& num) 
    {
        vector<vector<int>>  ans;
        int n=num.size();
        sort(num.begin(),num.end());
        for(int i=0;i<num.size();i++)
        {
            if(i>0 && num[i] == num[i-1]) continue;
            int j=i+1;
            int k=n-1;
            while(j<k) {
                int sum = num[i] + num[j] + num[k];
                if(sum < 0){
                j++;
            }
            else if(sum>0)
            {
                k--;
            }
            else {
                vector<int> temp = {num[i],num[j],num[k]};
                ans.push_back(temp);
                j++;
                k--;
                while(j<k && num[j] == num[j-1]) 
                j++;
                while(j<k && (num[k] == num[k+1]))
                k--;
            }
            }
        }

        return ans;
    }
int main() 
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> result = threeSum(nums);

    cout << "Triplets with sum 0 are: " << endl;
    for (int i = 0; i < result.size(); i++) 
    {
        cout << "[ ";
        for (int j = 0; j < result[i].size(); j++) 
        {
            cout << result[i][j] << " ";
        }
        cout << "]" << endl;
    }

    return 0;
}