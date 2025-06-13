#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number to print the pattern-";
    cin>>n;
    for(int i=0;i<=2*n;i++)
    {
        for(int j=n;j>=i;j--)
        {
            cout<<"*";
        }
        for(int k=0;k<=i;k++)
        {
            cout<<"*";
        }
        for(int b=0;b<2*i;b++)
        {
            cout<<" ";
        }
        for(int f=2*n;f>i;f--)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}