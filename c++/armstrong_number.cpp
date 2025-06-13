#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the number to check armstrong";
    cin>>N;
    int dup = N;
    int sum=0;
    while(N>0)
    {
        int ld=N%10;
        sum=sum+(ld*ld*ld);
    N=N/10;
    int revNum=(revNum*10)+ld;
    }
    if(dup==sum)
    cout<<"armstrong number";
    else;
    cout<<"not armstrong number";
    return 0;
}
