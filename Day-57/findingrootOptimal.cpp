#include<iostream>
using namespace std;
//return 1 if == m
//return 0 if < m
// return 2 if > m
int func(int mid , int n , int m)
{
    long long ans =1;
    for(int i= 1;i <= n;i++)
    {
        ans = ans * mid;
        if(ans>m)
        return 2;
        if(ans ==m)
        return 1;
        else
        if(ans <m)
        return 0;
    }
    if(ans == m)
    return 1;
    return 0;
}
int NthRoot(int n, int m)
{
    int  low = 1, high = m;
    while( low <= high)
    {
        int mid = (low+high)/2;
        int res = func(mid, n, m);
        if(res == 1)
            return mid;
        else if(res == 0)
            low = mid + 1;
        else
            high = mid - 1;
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

    int result = NthRoot(n, m);
    if(result != -1)
        cout << "The " << n << "th root of " << m << " is: " << result << endl;
    else
        cout << "No exact " << n << "th root found for " << m << endl;

    return 0;
}
//this code user binary search to find the nth root of a number m
// the time complexity of this code is O(log(m) * n) where n is the power and m is the number
// the space complexity is O(1) as we are using constant space