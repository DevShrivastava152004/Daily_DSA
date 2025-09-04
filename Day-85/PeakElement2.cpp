#include<iostream>
#include<vector>
#include<algorithm> // algorithm header file added for using max function
using namespace std;
int findMaxIndex(vector<vector<int>>& mat, int n, int m,int col)
{
    int maxValue = -1;
    int index = -1;
    for(int i= 0;i<n;i++)
    {
        if(mat[i][col] > maxValue)
        {
            maxValue = mat[i][col];
            index = i;
        }
    }
    return index;
    // this will help us to find the index of the maximum element in  a column
}
vector<int> findPeakGrid(vector<vector<int>>& mat)
 {
    int n = mat.size();
    int m = mat[0].size();
    int start = 0;
    int end = m-1;
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        int maxIndex = findMaxIndex(mat,n,m,mid);
        bool leftIsBig = false;
        bool rightIsBig = false;
        if(mid - 1 >= 0 && mat[maxIndex][mid-1] > mat[maxIndex][mid])
        {
            leftIsBig = true;
        }
        if(mid + 1 < m && mat[maxIndex][mid+1] > mat[maxIndex][mid])
        {
            rightIsBig = true;
        }
        if(!leftIsBig && !rightIsBig)
        {
            return {maxIndex, mid};
        }
        else if(leftIsBig)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    
    return {-1,-1};
}
int main()
{
    vector<vector<int>> mat =  {{4,5,6},
                                {3,4,5},
                                {2,3,4}};
    vector<int> ans = findPeakGrid(mat);
    cout<<"The Peak Element is at index: ["<<ans[0]<<","<<ans[1]<<"]"<<endl;
    return 0;
}
// the time complexity of this code is O(nlogm) where n is the number of rows and m is the number of columns
// the space complexity of this code is O(1)