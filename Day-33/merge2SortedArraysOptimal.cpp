#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void merge2SortedArrays(vector<long long>& arr1,vector<long long>& arr2,int n,int m)
{
    int left = n-1;
    int right = 0;
    while(left >=0 && right < m)
    {
        if(arr1[left] > arr2[right])
        {
        swap(arr1[left],arr2[right]);
        left--;
        right++;
        }
    else 
    {
        break;
    }
}
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
}
int main()
{
    
    int n;
    cout<<"Enter the size of the first array";
    cin>>n;
    int m;
    cout<<"Enter the size of the second array";
    cin>>m;
      vector<long long> arr1(n), arr2(m);
    cout << "Enter the elements of the first array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the elements of the second array: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    merge2SortedArrays(arr1, arr2, n, m);
    cout << "Merged arrays:\n";
    for (int i = 0; i < n; i++)
        cout << arr1[i] << " ";
    for (int i = 0; i < m; i++)
        cout << arr2[i] << " ";
    return 0;
}