#include<iostream>
#include<vector>
using namespace std;

int longestK(vector<int>& arr, int k)
{
    int n = arr.size();
    int sum = arr[0];
    int maxLen = 0;
    int left = 0, right = 0;

    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
        if (right < n)
        {
            sum += arr[right];
        }
    }
    return maxLen;
}

int main()
{
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array (non-negative): ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the value of k: ";
    cin >> k;

    int result = longestK(arr, k);
    cout << "The len
