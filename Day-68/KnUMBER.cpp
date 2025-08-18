#include <iostream>
#include <vector>
using namespace std;

int missingK(const vector<int>& arr, int n, int k) 
{
    for (int i = 0; i < n; i++)
     {
        if (arr[i] <= k) 
            k++;  
        else 
            break;
    }
    return k;
}
int main() 
{
    vector<int> arr = {4, 7, 9, 10};
    int n = arr.size();
    int k = 4;
    int ans = missingK(arr, n, k);
    cout << "The missing number is: " << ans ;
    return 0;
}
