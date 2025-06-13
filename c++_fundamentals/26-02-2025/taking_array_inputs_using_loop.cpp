#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter array elements:" << endl;
    for(int i= 0;i<5;++i) 
    {
        cin>>arr[i];
    }
    cout<<"Array elements:" <<endl;
    for(int j= 0;j < 5;++j)
    {
        cout<<arr[j]<<endl;
    }
    return 0;
}