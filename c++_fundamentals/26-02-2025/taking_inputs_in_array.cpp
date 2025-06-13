#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"Enter the first element:";
    cin>>arr[0];
    cout<<"Enter the second element:";
    cin>>arr[1];
    cout<<"Enter the third element:";
    cin>>arr[2];
    cout<<"Enter the fourth element:";
    cin>>arr[3];
    cout<<"Enter the fifth element:";
    cin>>arr[4];
    cout<<"Array elements:" <<endl;

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
