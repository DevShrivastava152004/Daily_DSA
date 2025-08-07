#include<iostream>
using namespace std;
long long SquareRoot(long long n)
{
    int low = 0,high = n;
    while(low <= high)
    {
        long long mid = (low+high)/2;
        if(mid * mid <= n)
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return high;
}
int main()
{
    int n = 30;
    int result = SquareRoot(n);
    cout<<"the square root of "<<n<<" is"<<result;
    return 0;
}
//the time complexity of this code is O(log n) and the space complexity is O(1)