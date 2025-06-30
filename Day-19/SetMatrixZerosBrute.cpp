#include<iostream>
#include<vector>
using namespace std;
void markRow(vector<vector<int>>& matrix, int row , int m)
{
    // This function marks the entire row as -1 if it contains a 0.We are using -1 to mark the cells that need to be converted to 0 later.
    for(int j=0;j<m;j++)
    {
        if(matrix[row][j] != 0)
        matrix[row][j] = -1;
    }
}
void markCol(vector<vector<int>>& matrix, int col,int n)
{
    for(int i=0;i<n;i++)
    {
        if(matrix[i][col] != 0)
        matrix[i][col] = -1;
    }
}
void convertZeros(vector<vector<int>>& matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j] == 0)
            {
                markRow(matrix,i,m);
                markCol(matrix,j,m);
            }
        }
    }
    // Now we will convert all the -1 to 0
    for(int i=0;i<n;i++)
    {
        for(int j=0; j<m;j++)
        {
            if(matrix[i][j] == -1)
            matrix[i][j] = 0;
        }
    }
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 1, 0},
        {1, 0, 1},
        {0, 1, 1}
    };
    
    convertZeros(matrix);
    
    for(int i = 0; i < matrix.size(); i++) 
    {
        for(int j=0; j < matrix[0].size(); j++)
        {
            cout<<matrix[i][j] << " ";    
        }
        cout << endl;
    }
    
    return 0;
}
//this is the brute force approach to set matrix zeros
// It has a time complexity of O(n*m) and space complexity of O(1)