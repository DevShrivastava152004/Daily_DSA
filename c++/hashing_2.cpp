#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin >> n;

    vector<int> arr(n); // use vector instead of VLA
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    map<int, int> mpp; // map to store frequency
    for(int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }

    int q;
    cin >> q;
    while(q--)
    {
        int number;
        cin >> number;
        cout << mpp[number] << endl; // print frequency of number
    }

    return 0;
}
