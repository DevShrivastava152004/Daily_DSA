#include<iostream>
using namespace std;
int main()
{
    int n,smx;
cout<<"Enter the size of element";
cin>>n;
int arr[n];
cout<<"Enter the elements of the array:";
for(int i =0;i<n;i++){
cin>>arr[i];
}
int mx = arr[0];
for(int i=1;i<n;i++)
{
    if(mx<arr[i])
    {
    mx=arr[i];
}
if(smx = arr[i] && smx != mx)
{
    cout<<smx;
} 

)
}
cout<<"The maxiumum element in an array is:"<<mx<<endl;
}
