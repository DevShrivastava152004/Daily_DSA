#include<iostream>
#include<vector>
using namespace std;
int longk(vector<int>& arr,int k)
{
    
    int n= arr.size();
    int len=0;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum += arr[j];
            if(sum == k)
            len=max(len,j-i+1);
        }
    }
    return len;
}
int main()
{
    int n,k;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n ; i++)
        cin >> arr[i];
        cout<<"Enter the value of k";
        cin>>k;
    
    int result = longk(arr, k);
    cout << "The length of the longest subarray with sum equal to k is: " << result << endl;
    
    return 0;
}

