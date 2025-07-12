#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>> &arr)
{
int n = arr.size();
sort(arr.begin() , arr.end());
vector<vector<int>> ans;
for(int i=0;i<n;i++)
{
    int start = arr[i][0];
    int end = arr[i][1];
    if(!ans.empty() && end <= ans.back()[1])
    {
        continue;
    }
    for(int j= i+1 ; j<n; j++)
    {
        if(arr[j][0] <= end)
        {
            end = max(end, arr[j][1]);
        }
        else {
            break;
        }
    }
    ans.push_back({start, end});
}
return ans;
}
int main()
{
    int n;
    cout <<"Enter number of intervals: ";
    cin >> n;
    vector<vector<int>> intervals(n, vector<int>(2));//har vector me 2 elements hone chahiye 
    cout <<"Enter intervals (start and end):" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> intervals[i][0] >> intervals[i][1];
    }
    vector<vector<int>> merged = mergeOverlappingIntervals(intervals);
    cout <<  "Merged Intervals are: - ";
    for (int i = 0; i < merged.size(); i++) 
    {
    cout << "[" << merged[i][0] << ", " << merged[i][1] << "]" << endl;
}
    return 0;
}
