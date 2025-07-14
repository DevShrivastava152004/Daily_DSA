//This is the brute force appraoch for solving this problem with a time complexity of O(n+m) + 0(n+m) and space complexity of O(n+m)
#include<iostream>
#include<vector>
using namespace std;
void mergeElements(vector<long long>& arr1,vector<long long>& arr2,int n,int m)
{
    long long arr3[n+m];
    int left = 0;
    int right = 0;
    int index = 0;
    while(left < n && right < m)
    {
        if(arr1[left] <= arr2[right])
        {
            arr3[index] = arr1[left];
            left++,index++;
        }
        else {
            arr3[index] = arr2[right];
            right++,index++;
        }
    }
    while(left<n)
    {
        arr3[index++] = arr1[left++];
    }
    while(right<m)
    {
        arr3[index++] = arr2[right++];
    }
    for(int i = 0;i<n+m;i++)
    {
        if(i<n)
        arr1[i] = arr3[i];
        else
        arr2[i-n]=arr3[i];
    }
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
    mergeElements(arr1, arr2, n, m);
    cout << "Merged arrays:\n";
    for (int i = 0; i < n; i++)
        cout << arr1[i] << " ";
    for (int i = 0; i < m; i++)
        cout << arr2[i] << " ";
    return 0;
}
//arr1[]=[1,3,5,7]
//arr2[]=[0,2,6,8,9]