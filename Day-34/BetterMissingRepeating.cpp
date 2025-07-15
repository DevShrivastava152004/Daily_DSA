#include<iostream>
#include<vector>
using namespace std;
void MissingRepeatin(vector<int>& arr,int n)
{
    vector<int> freq(n+1,0);
    for(int i = 0;i<n;i++)
    {
        freq[arr[i]]++;
    }
    int missing = -1,repeating = -1;
    {
    for(int i = 1;i<=n;i++)
        if(freq[i] == 0)
        missing = i;
        else if(freq[i] == 2)
        repeating = i;
    }
    cout<<"Repeating number is"<<repeating;
    cout<<"missing number is"<<missing;
}

int main() {
    vector<int> arr = {4, 3, 6, 2, 1, 1};
    int n = arr.size();
    MissingRepeatin(arr, n);
    return 0;
}