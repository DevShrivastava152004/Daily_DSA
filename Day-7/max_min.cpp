#include<iostream>
using namespace std;
int main()
{
     int n;
     cout<<"Enter the size of the array";
     cin>>n;
     int arr[1000];
     cout<<"Enter "<<n<<"Elements-";
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     int max=arr[0];
     int min=arr[0];
     for(int i=0;i<n;i++)
     {
         if(arr[i]>max)
         max=arr[i];
         else 
         if(arr[i]<min)
         min=arr[i];
     }
     cout<<"Maximum number in the array="<<max<<"  And minimum number in the array-"<<min<<endl;
     return 0;
}