#include<iostream>
using namespace std;
int main()
{
    int n,index;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[1000];
    cout<<"Enter the"<<n<<"elements-";
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    cout << "Enter the index where you want to delete (0 to " << n << "): ";
    cin>>index;
    if(index<0||index>n)
    {
    cout<<"Invalid index"<<endl;
    return 0;
    }
for(int i=index;i< n-1;i++)
{
    arr[i]=arr[i+1];
}
n--;
cout<<"After the deletion the array is-";
for(int i =0;i<n;i++)
{
    cout<<arr[i]<<" ";
}
cout<<endl;
return 0;
}
