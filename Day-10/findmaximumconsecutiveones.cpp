#include<iostream>
using namespace std;
int maximum(int arr[],int n)
{
    int maximum=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            count++;
            maximum = max(maximum,count);
        }
        else
        {
            count = 0;
        }
    }
    return maximum;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of tha array";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int result = maximum(arr,n);
    cout<<"The maximum consecutive ones are : - "<<result;
    return 0;
}