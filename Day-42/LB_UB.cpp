#include<iostream>
#include<vector>
using namespace std;
int lower_bound(vector<int>& arr, int x, int n) 
{
int low = 0, high = n - 1;
int ans = n; 
while (low <= high) 
{
    int mid = (low + high) / 2;
    if (arr[mid] <= x) 
    {
        low = mid + 1;
    } else
     {
        ans = mid; 
        high = mid - 1; 
    }
}
return ans;
}
int upper_bound(vector<int>& arr, int x, int n) 
{
int low = 0, high = n - 1;
int ans = n;    
while(low <= high) 
{
    int mid = (low + high) / 2;
    if (arr[mid] < x)
     {
        low = mid + 1;
    } 
    else 
    {
        ans = mid; 
        high = mid - 1; 
    }
}
return ans;
}
int main() 
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements in sorted order: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int x;
    cout << "Enter the element to find lower and upper bounds: ";
    cin >> x;
    int lb = lower_bound(arr, x, n);
    int ub = upper_bound(arr, x, n);
    cout << "Lower Bound Index: " << lb << endl;
    cout << "Upper Bound Index: " << ub << endl;
    return 0;
}