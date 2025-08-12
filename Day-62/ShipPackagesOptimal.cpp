#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // for accumulate
#include <cmath> 
using namespace std;

int findDays(vector<int> &weights, int cap) 
{
    int days = 1; 
    int load = 0;
    int n = weights.size(); 
    for (int i = 0; i < n; i++) 
    {
        if (load + weights[i] > cap) 
        {
            days += 1; 
            load = weights[i]; 
        }
        else
         {
            load += weights[i];
        }
    }
    return days;
}

int leastWeightCapacity(vector<int> &weights, int d)
 {
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
    while (low <= high)
     {
        int mid = (low + high) / 2;
        int numberOfDays = findDays(weights, mid);
        if (numberOfDays <= d) 
        {
            high = mid - 1;
        }
        else 
        {
            low = mid + 1;
        }
    }
    return low;
}

int main()
{
    vector<int> weights = {5, 4, 5, 2, 3, 4, 5, 6};
    int d = 5;
    int ans = leastWeightCapacity(weights, d);
    cout << "The minimum capacity should be: " << ans << endl;
    return 0;
}
// this is the optimal solution using binary search with time complexity O(n log(sum - max))and space complexity O(1)