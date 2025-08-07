#include<iostream>
using namespace std;
int Squarerootnumber(int n)
{
    int low = 1,high = n;
    while(low <= high)
    {
        long long mid = (low+high)/2;
        if(mid * mid <= (long long)(n))
        {
            low = mid +1;
        }
        else
        {
            high = mid -1;
        }
    }
    return high;
}
int main()
{
    int n;
    cout<<"Enter any number";
    cin>>n;
    int result = Squarerootnumber(n);
    cout<<"The square root of "<<n<<" is: "<<result;
    return 0;
}
//this code has a time complexity of O(log n) and space complexity of O(1).