//clearing some basic concepts of recursion by solving some problems with the help of apna college shraddha mam
#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n + sum(n-1);
}
int main()
{
    cout << sum(5) << endl;
    return 0;
}