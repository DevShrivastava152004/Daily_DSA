#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value to check";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<endl;
        }
    }
}