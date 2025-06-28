//brute appraoch for rearranging elemennts by sign
#include<iostream>
#include<vector>
using namespace std;
void rearrange(vector<int>& arr)
{
    int n = arr.size();
    vector<int> pos,neg;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > 0)
        {
        pos.push_back(arr[i]);
        }
        else
        {
        neg.push_back(arr[i]);//stored the elements in their respective positions
        }
    }
        for(int i=0;i<n/2;i++)
        {
            arr[i*2]= pos[i];
            arr[i*2+1]=neg[i];
        }
    }
int main()
{
    vector<int> arr = {1, -2, 3, -4, 5, -6};
    rearrange(arr);
    cout << "Rearranged array: ";
    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}