#include<iostream>
#include<vector>
using namespace std;
int numberOne(vector<int>& arr)
{
    int n= arr.size();
    int num,count;
    for(int i=0;i<n;i++)
    {
        num=arr[i];
        count=0;
    for(int j=0;j<n;j++)
{
    if(arr[j]==num)
    count++;
}
if(count == 1)
return num;
}
return -1;
}

int main( )
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n ; i++)
        cin >> arr[i];
    
    int result = numberOne(arr);
    if(result != -1)
    cout<<"The number that appears once is: "<<result<<endl;
    else
    cout<<"no unique number is there"<<endl;
    
    return 0;
}