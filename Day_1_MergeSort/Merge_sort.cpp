#include<iostream>
#include<vector>
using namespace std; 

void merge(int arr[],int start,int mid,int end)//do sorted parts ko milata hai
{
    vector<int>temp(end-start+1);
    int left = start , right = mid +1 ,index=0;
    while( left <= mid && right <= end)
    {
        if(arr[left] <= arr[right])
        {
            temp[index]  = arr[left];
            index++ ,left++;
       }
      else
      {
        temp[index]= arr[right];
        index++,right++; 
       }
    }
       while (left <= mid)
      {
        temp[index] = arr[left];
        index++,left++;
      }
      while (right <= end)
      {
        temp[index]=arr[right];
        index++,right++;
      }
    //now put these value in an array
    index = 0;
    while ( start <= end) 
    {
        arr[start] = temp[index];
        start++,index++;
    }
}
    void mergesort( int arr[], int start,int end)
   {
    if(start==end)
    return;
    int mid = start + (end-start)/2;
    mergesort(arr,start,mid);//left
    mergesort(arr,mid+1,end);//right
    merge(arr,start,mid,end);
   }
   int main()
   {
     int n;
    cout<<"Enter the size of the array =";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    cin>>arr[i];
    merge(arr,0,n-1);
    cout<<"sorted array-";
    for(int i =0;i<n;i++)
        cout << arr[i] << ' ';
   }

    