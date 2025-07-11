#include<iostream>
#include<hash_map>
#include<set>
#include<map>
using namespace std;
int subarrayswithsumK(vector< int > a,int k)
{
    int xr = 0;
    map< int,int > mpp;
    mpp[xr]++;
    int cnt = 0;
    for(int i=0;i<a.size();i++)
    {
        xr = xr ^ a[i];
        int x = xr ^ k;
        cnt += mpp[x];
        mpp[xr]++;
    }
    return cnt;
}
int main()
{
    int n, k;
    cout << "Enter number of elements in array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter value of k: ";
    cin >> k;

    int result = subarrayswithsumK(arr, k);

    cout << "Number of subarrays with XOR sum " << k << " is: " << result << endl;

    return 0;
}