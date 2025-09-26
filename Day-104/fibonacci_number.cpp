//fibonacci number which means the number should be the sum of the last two numbers
#include<iostream>
using namespace std;
int fibo(int n)
{
    if(n==0 || n==1)
    {

        return n;
    }
    return fibo(n-1) + fibo(n-2);
}
int main()
{
    int n;
    cout << "enter the number" << endl;
    cin >> n;
    cout << fibo(n) << endl;
    return 0; // we write return 0; to indicate that the program ended successfully
}
