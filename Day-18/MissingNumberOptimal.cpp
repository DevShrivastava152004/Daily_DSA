#include<iostream>
using namespace std;
int findMissingNumber(int arr[],int n)
{
    
    int xor1=0,xor2=0;
    for(int i=0;i<n-1;i++)
    {
        xor2=xor2^arr[i];
        xor1=xor1^(i+1);
    }
    xor1 = xor1 ^ n;
    return xor1 ^ xor2;
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n -1; i++)
        cin >> arr[i];
    
    int missing = findMissingNumber(arr, n);
    cout<<"the missing number is-"<<missing;
    
    return 0;
}
    
    
    
    
    
    
    
    
    
    
