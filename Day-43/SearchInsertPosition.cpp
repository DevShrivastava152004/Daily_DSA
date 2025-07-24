#include<iostream>
#include<vector>
using namespace std;
int SearchInsertPosition(vector<int>& arr,int x)
{
    int n = arr.size();
    int low = 0, high = n-1;
    int ans = n;
    while(low <= high)
    {
        int mid = (low+high)/2;
        //maybe an answer
        if(arr[mid] >= x)
        {
            ans = mid;
            //look for small index on  the left side
            high = mid-1;
        }
        else{
            low = mid+1;//look for right
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>> n;
    vector<int> arr(n);
    cout<<"Enter the elements in sorted order: ";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int x;
    cout<<"Enter the element to find its insert position: ";
    cin>>x;
    int position = SearchInsertPosition(arr, x);
    cout<<"Insert Position Index: "<<position<<endl;
    return 0;
}
//here we have implemented a function as lower bound for finding the insert position of an element in a sorted array.
//here the time complexity is o(log n) and space complexity is O(1).