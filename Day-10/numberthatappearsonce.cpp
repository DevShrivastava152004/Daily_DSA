#include<iostream>
using namespace std;
int numberonce(int arr[],int n)
{
    int xorr=0;
    for(int i=0;i<n;i++)
    {
        xorr=xorr^arr[i];
    }
    return xorr;
}
int main()
{
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int result = numberonce(arr,n);
    cout<<"the number which appeared once while the others twice is-"<<result;
    return 0;
}