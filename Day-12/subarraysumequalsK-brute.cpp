//brute approach
#include <iostream>
#include <vector>   
using namespace std;
int subarraySum(vector<int> &arr, int k)
 {
    int n = arr.size();
    int count = 0;
    for (int i = 0; i < n; i++)
     {
        int sum = 0;
        for (int j = i; j < n; j++) 
        {
            sum += arr[j];
            if (sum == k) {
                count++;
            }
        }
    }
    return count;
}
int main() {
    vector<int> arr = {2,1,7,-4,2,1,3,4,-15,2,-3,6};
    int k = 2;
    cout << "Number of subarrays with sum " << k << ": " << subarraySum(arr, k) << endl;
    return 0;
}