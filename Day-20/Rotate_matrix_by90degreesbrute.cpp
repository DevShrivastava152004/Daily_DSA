#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotateMatrix(vector<vector<int>>& matrix)
{
    int n = matrix.size();
    vector<vector<int>> ans(n,vector<int>(n));
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        ans[j][n-i-1] = matrix[i][j];
    }
}
matrix = ans;
}
int main ()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int n = matrix.size();
    rotateMatrix(matrix);
    
    for(int i = 0; i < n; i++) 
    {
        for(int j=0; j < n; j++)
        {
            cout<<matrix[i][j] << " ";    
        }
        cout << endl;
    }
    
    return 0;
}
// this is the brute force approach to rotate a matrix by 90 degrees clockwise
// It has a time complexity of O(n^2) and space complexity of O(n^2) as we are using an extra matrix to store the rotated matrix.