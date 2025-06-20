#include<iostream>
#include<vector>
using namespace std;
void MoveZerostoEnd(int arr[],int n)
{
    vector<int>temp;
    for(int i=0; i<n;i++)
    {
        if(arr[i] != 0)
        {
            temp.push_back(arr[i]);
        }
    }
    int nz = temp.size();
    for(int i=0 ; i< nz;i++)
    {
        arr[i] = temp[i];
    }
    for(int i=nz;i<n;i++)
    {
        arr[i]=0;
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    cout << "Enter the elements";
    for(int i=0;i<n;i++)
        cin>>arr[i];
        MoveZerostoEnd(arr,n);
        cout << "After putting all the zeros to the end - ";
        for(int i =0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
        return 0;
        }