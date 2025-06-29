#include<iostream>
#include<vector>
using namespace std;
int maxi(vector<int>& arr)
{
    int n= arr.size();
    int maxi=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count++;
            maxi = max(maxi,count);
        }
        else
        {
            count = 0;
        }
    }
    return maxi;
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n ; i++)
        cin >> arr[i];
    
    int result = maxi(arr);
    cout<<"the maximum consecutive number is-"<<result;
    
    return 0;
}
    
    
    
    
    
    
    
    
    
    
