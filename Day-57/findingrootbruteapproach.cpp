//this is the brute force approach to find the root of a number
#include<iostream>
using namespace std;
int rooting(int base,int power)
{
    int result = 1;
    for(int i=0;i<power;i++)
    {
        result *= base;
    }
    return result;
}
int RootNumber(int m,int n)
{
    for(int i=0;i<=m;i++)
    {
        if(rooting(i,n) == m)
        return i;
        else if(rooting(i,n) > m)
        break;
    }
    return -1;
}
int main()
{
     int m, n;
    cout << "Enter the number (m): ";
    cin >> m;

    cout << "Enter the root you want to find (n): ";
    cin >> n;

    int result = RootNumber(m, n);
    if(result != -1)
        cout << "The " << n << "th root of " << m << " is: " << result << endl;
    else
        cout << "No exact " << n << "th root found for " << m << endl;

    return 0;
}
    
    
    
    
