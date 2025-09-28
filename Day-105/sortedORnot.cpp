#include<iostream>
#include<vector>
using namespace std;
 bool isSorted(vector<int> arr, int n)
 {
     if(n == 0 || n ==1 )
     {
         return true;
     }
     return arr[n-1] >= arr[n-2] && isSorted(arr, n-1);
 }
 int main()
 {
     vector<int> arr = {2,3,4,5,6};
     cout << isSorted(arr, arr.size()) << endl;
     return 0;
 }
 // the time complexity for this code is O(n) and the space complexity is O(n) due to recursive stack space