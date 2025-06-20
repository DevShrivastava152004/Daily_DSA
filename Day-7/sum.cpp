#include<iostream>
using namespace std;
int main()
{
     int n,sum=0;
     cout<<"Enter the size of the array";
     cin>>n;
     int arr[1000];
     cout<<"Enter "<<n<<"Elements-";
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     for(int i=0;i<n;i++)
     {
         sum=sum+arr[i];
     }
     cout<<"The sum of all the elements are-"<<sum<<endl;
     return 0;
}