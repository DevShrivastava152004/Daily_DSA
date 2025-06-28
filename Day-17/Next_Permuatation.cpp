//this is the optimal solution for finding the next permutation of an array in lexicographical order.
#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;
void nextPermutation(vector<int>& A) 
    {
        //find the pivot
        int pivot = -1,n = A.size();
        for(int i=n-2;i>=0;i--)
        {
            if(A[i] < A[i+1])
            {
                pivot =  i;
                break;
            }
        }
        if(pivot == -1)//if pivot is -1,it means the array is in descending order
        {
            reverse(A.begin(), A.end());
            return;
        }
        for(int i=n-1;i>pivot;i--)// find the rightmost element that is greater than the pivot
        {
            if(A[i] > A[pivot])
            {
                swap(A[i], A[pivot]);
                break;
            }
        }
        int i = pivot+1, j=n-1;// reverse the elements after the pivot to find the next permutation
        while( i<=j )
        {
            swap(A[i++], A[j--]);
        }   
         return;
    }
int main()
{
    vector<int> arr = {1, 2, 3};
    nextPermutation(arr);
    cout << "Next permutation: ";
    for(int i=0; i<arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}