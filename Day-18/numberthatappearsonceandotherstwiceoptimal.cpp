//this is done using xor property
#include<iostream>
#include<vector>
using namespace std;
int numberOne(vector<int>& arr)
{
    int n= arr.size();
    int xorr=0;
    for(int i=0;i<n;i++)
    {
        xorr = xorr^arr[i];
    }
    return xorr;
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
    
    int result = numberOne(arr);
    cout<<"The number that appears once is: "<<result<<endl;
    
    return 0;
}