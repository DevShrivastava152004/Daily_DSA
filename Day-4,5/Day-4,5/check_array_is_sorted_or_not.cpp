#include <iostream>
using namespace std;
bool check(int arr[],int n)
{
    int count = 0;
    for(int i =0;i<n;i++)
    {
        if(arr[i] > arr[(i+1)%n])
        {
            count++;
        }
    }
    return count <= 1;
}
int main()
{
int n;
cout << "Enter the size of the elements";
cin >> n;
int arr[n];
cout<<"Enter "<<n<<"eelements";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
if(check(arr,n))
cout<<"The arrray is sorted";
else
cout<<"The array is not sorted";
return 0;
}


