//print number from N to 1(classic tail recurssion)
#include<iostream>
using namespace std;
void printDescending(int n)
{
    if(n==0) return;
    cout << n << " ";
    printDescending(n-1);
}
int main()
{
    int n = 5;
    printDescending(n);
    return 0;
}
