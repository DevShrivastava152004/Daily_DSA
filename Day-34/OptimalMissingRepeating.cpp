#include<iostream>
#include<vector>
using namespace std;
vector<int> MissingRepeating(vector<int>& a)
{
    long long n = a.size();
    long long SN = (n * (n+1))/2;
    long long S2N = (n * (n+1) * (2*n+1)) / 6;
    long long S = 0, S2 = 0;
    for(int  i=0;i<n;i++)
    {
        S += a[i];
        S2 += (long long)a[i] * (long long)a[i];
    }
    long long val1 = S-SN;
    long long val2 = S2-S2N;
    val2 = val2 / val1;
    long long x = (val1 + val2) / 2;
    long long y = x - val1;
    return {(int)x, (int)y};
}
int main()
{
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    vector<int> arr(n);
    cout<<"Enter the elements to find the missing number and the repeating number";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    vector<int> ans = MissingRepeating(arr);
    cout<<"the missing number is"<< ans[0] << endl;
    cout<<"the repeating number is" << ans[1] << endl;
  return 0;
}