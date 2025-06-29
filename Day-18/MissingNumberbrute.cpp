#include<iostream>
using namespace std;
void findMissingNumber(int arr[],int n)
{
    for(int i=1;i<=n;i++)
    {
        int flag = 0;
        for(int j=0;j<n-1;j++)
    {
        if(arr[j] == i)
        {
     flag = 1;
        break;
    }
}
    if(flag == 0)
    {
        cout << "The missing number is: " << i << endl;
        return;
    }
}
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
    
    findMissingNumber(arr, n);
    
    return 0;
}
    
    
    
    
    
    
    
    
    
    
