#include<iostream>
#include<vector>
using namespace std;
void setMatrixZeros(vector<vector<int>>& matrix,int n,int m)
{
    vector<int> col(m,0);// to mark columns
    vector<int> row(n,0);// to mark rows
    //mark rows and columns where 0 is found
    // we are using 1 to mark the rows and columns that need to be set to 0 later.
    for(int i =0 ; i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
        if(matrix[i][j] == 0)
        {
            row[i] = 1;
            col[j] = 1;
        }
    }
}
//Set cells to 0 if their row or column in marked
for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(row[i] == 1 || col[j] == 1)
        {
            matrix[i][j] = 0;
        }
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
    
    int n = matrix.size();
    int m = matrix[0].size();
    
    setMatrixZeros(matrix, n, m);
    
    for(int i = 0; i < n; i++) 
    {
        for(int j=0; j < m; j++)
        {
            cout<<matrix[i][j] << " ";    
        }
        cout << endl;
    }
    
    return 0;
}
//therefore in better approach we are using O(n+m) space to store the rows and columns that need to be set to 0 later.