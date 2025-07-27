#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getFloorAndCeil(vector<int>& nums, int x) 
    {
        int n = nums.size();
        int floor = -1, ceil = -1;
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] <= x) {
                floor = nums[mid]; 
                low = mid + 1;
            }
             else 
            {
                high = mid - 1;
            }
        }
        low = 0, high = n - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] >= x) 
            {
                ceil = nums[mid]; 
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return {floor, ceil};
    }
};
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements in sorted order: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    
    int x;
    cout << "Enter the element to find its floor and ceil: ";
    cin >> x;

    Solution sol;
    vector<int> result = sol.getFloorAndCeil(nums, x);
    cout << "Floor: " << result[0] << ", Ceil: " << result[1] << endl;
    return 0;
}
