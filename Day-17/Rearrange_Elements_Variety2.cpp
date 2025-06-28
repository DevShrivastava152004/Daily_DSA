//when positive and negative numbers are not equal,we can use the following approach to rearrange the elements by sign
#include<iostream>
#include<vector>
using namespace std;
void rearrange(vector<int>& arr)
{
    vector<int> pos, neg;
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }
    int i = 0, p = 0, ne = 0;
    while(p < pos.size() && ne < neg.size()) 
    {
        arr[i++] = pos[p++];
        arr[i++] = neg[ne++];
    }
    while(p < pos.size()) 
    {
        arr[i++] = pos[p++];
    }
    while(ne < neg.size()) 
    {
        arr[i++] = neg[ne++];
    }
}
int main() 
{
    vector<int> arr = {1, -2, 3, -4, 5, -6, 7,8,9,7};
    rearrange(arr);
    cout << "Rearranged array: ";
    for(int i = 0; i < arr.size(); i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
