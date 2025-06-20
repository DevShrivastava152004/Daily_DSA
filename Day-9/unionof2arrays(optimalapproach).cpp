#include <iostream>
#include <vector>
using namespace std;
vector<int> sortedArray(vector<int> a, vector<int> b)
{
    int n1 = a.size();
    int n2 = b.size();
    int i = 0, j = 0;
    vector<int> unionArr;
    while (i < n1 && j < n2) 
    {
        if (a[i] <= b[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != a[i]) 
            {
                unionArr.push_back(a[i]);
            }
            i++;
        } 
        else 
        {
            if (unionArr.size() == 0 || unionArr.back() != b[j]) 
            {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (unionArr.size() == 0 || unionArr.back() != a[i])
        {
            unionArr.push_back(a[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (unionArr.size() == 0 || unionArr.back() != b[j])
        {
            unionArr.push_back(b[j]);
        }
        j++;
    }

    return unionArr;
}

int main() {
    int n1, n2;
    cout << "Enter the size of array 1: ";
    cin >> n1;
    vector<int> arr1(n1);
    cout << "Enter the elements of array 1: ";
    for (int i = 0; i < n1; i++)
        cin >> arr1[i];
    cout << "Enter the size of array 2: ";
    cin >> n2;
    vector<int> arr2(n2);
    cout << "Enter the elements of array 2: ";
    for (int i = 0; i < n2; i++)
        cin >> arr2[i];
    vector<int> result = sortedArray(arr1, arr2);
    cout << "Union of the two sorted arrays: ";
    for (int val : result) 
    { 
        cout << val << " ";
    }
    cout << endl;
    return 0;
}