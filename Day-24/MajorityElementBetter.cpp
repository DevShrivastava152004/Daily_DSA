#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> majorityElement(vector<int>& nums) 
{
    int n = nums.size();
    unordered_map<int, int> freq;  
    for (int i = 0; i < n; i++) 
    {
        freq[nums[i]]++;
    }

    vector<int> result;
    for (auto it : freq) 
    {
        if (it.second > n / 3) 
        {
            result.push_back(it.first);
        }
    }

    return result;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> nums[i];
    }

    vector<int> result = majorityElement(nums);

    cout << "The majority elements (>n/3) are: ";
    if (result.empty()) {
        cout << "No elements found.";
    } else {
        for (int i = 0; i < result.size(); i++) 
        {
            cout << result[i] << " ";
        }
    }

    return 0;
}
