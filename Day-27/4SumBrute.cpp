#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> fourSumBruteForce(vector<int>& nums, int target) {
    int n = nums.size();
    vector<vector<int>> result;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                for (int l = k + 1; l < n; l++) {
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];  // overflow prevention
                    if (sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        result.push_back(temp);
                    }
                }
            }
        }
    }

    return result;
}

int main() {
    vector<int> nums = {1, 0, -1, 0, -2, 2};
    int target = 0;

    vector<vector<int>> ans = fourSumBruteForce(nums, target);

    cout << "Quadruplets that sum to " << target << ":\n";
    
    for (int i = 0; i < ans.size(); i++) {
        cout << "[";
        for (int j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j];
            if (j < ans[i].size() - 1) cout << ", ";
        }
        cout << "]\n";
    }

    return 0;
}
