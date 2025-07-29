
#include<iostream>
#include<vector>
using namespace std;
int firstOccur(vector<int>& arr,int n,int k){
    int low = 0,high = n-1;
    int first = -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == k){
            first  = mid;
            high = mid - 1;
        }
        else if(arr[mid] < k)
        low = mid +1;
        else high = mid -1;
    }
    return first;
}
int lastOccur(vector<int>& arr,int n, int k){
    int low = 0, high = n-1;
    int last = -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] == k){
            last = mid;
            low = mid+1;
        }
        else if(arr[mid] < k)
        low = mid+1;
        else
        high = mid-1;
    }
    return last;
}
pair<int, int> firstandlastposition(vector<int> & arr,int n,int k)
{
    int first = firstOccur(arr,n,k);
    if(first == -1)
     return{-1,-1};
    //because if there is no first occurence there won't be any last too
    int last = lastOccur(arr, n, k);
    return {first,last};
}
int count(vector<int>& arr, int n, int x) {
    pair<int, int> ans = firstandlastposition(arr, n, x);
    if (ans.first == -1) return 0;
    return (ans.second - ans.first + 1);
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
    
    int k;
    cout << "Enter the element to find its first and last occurrence: ";
    cin >> k;

    pair<int, int> result = firstandlastposition(arr, n, k);
    
    if (result.first == -1)
        cout << "Element not found in the array." << endl;
    else
        cout << "First occurrence: " << result.first << ", Last occurrence: " << result.second << endl;

    return 0;
}
//this give the time complexity of O(log n) and space complexity of O(1)













