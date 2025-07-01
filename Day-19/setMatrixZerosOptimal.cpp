#include<iostream>
#include<vector>
using namespace std;
void setMatrixZeros(vector<vector<int>>& matrix)
{
    int n = matrix.size();// this is for the columns
    int m = matrix[0].size();// this is for the rows
    // first we will check if the first row and first column has any 0s
    bool firstRow = false,firstCol = false;
    for(int i= 0;i<n;i++)
    {
        if(matrix[i][0] == 0)
        {
        firstCol = true;
    }
    }
    for(int j =0;j<m;j++)
    {
        if(matrix[0][j] == 0)
        {
        firstRow = true;
    }
    }
    // use first row and col to mark other 0s
    //this basically helps us to mark the rows and columns that need to be set to 0 later
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(matrix[i][j] == 0)
            {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }//Now,set the matrix cells to 0 if their row or columns is marked
    for(int i =1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(matrix[i][0] == 0 || matrix[0][j] == 0)//agar row ya column me se kuch bhi marked hai toh please set the cell to 0
            {
                matrix[i][j] = 0;
            }
        }
    }
    if(firstRow)//agar first row me 0 hai toh please set the entire first row to 0
    {
        for(int j=0;j<n;j++)
        {
            matrix[0][j] = 0;
        }
    }
    if(firstCol)//same with the column
    {
        for(int i=0;i<n;i++)
        {
            matrix[i][0] = 0;
        }
    }
}
int main()
{
    vector<vector<int>> matrix = 
    {
        {1, 1, 0},
        {1, 0, 1},
        {0, 1, 1}
    };
    setMatrixZeros(matrix);
    for(int i = 0; i < matrix.size(); i++) 
    {
        for(int j = 0; j < matrix[0].size(); j++)
         {
            cout << matrix[i][j] << " ";
        }
        cout << endl; 
    }
    return 0;

}
//this approach uses O(1) space as we are not using any extra space except for the input matrix and the time complexity is O(n*m) as we are iterating through the matrix multiple times.