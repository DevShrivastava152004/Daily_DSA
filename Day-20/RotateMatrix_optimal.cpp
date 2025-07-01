#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void rotateMatrix(vector<vector<int>>& mat)
{
    int n =mat.size();
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(mat[i][j], mat[j][i]); // Transpose the matrix
        }
    }
    for(int i=0;i<n;i++)
    {
        reverse(mat[i].begin(),mat[i].end()); // this is used to reverse the rows of the transposed matrix)
    }
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    rotateMatrix(matrix);
    
    for(int i = 0; i < matrix.size(); i++) 
    {
        for(int j=0; j < matrix[i].size(); j++)
        {
            cout<<matrix[i][j] << " ";    
        }
        cout << endl;
    }
    
    return 0;
}
// this is the optimal approach for rotating the matrix by 90 degree
// It has a time complexity of O(n^2) and space complexity of O(1) as we are not using any extra space to store the rotated matrix.