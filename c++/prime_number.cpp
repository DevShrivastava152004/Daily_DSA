#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number to check prime or not";
    cin>>n;
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        cnt++;
        }
        if(cnt==2)
        {
            cout<<"Prime number";
        }
        else
        {
            cout<<"not prime number";
        }
        return 0;
}