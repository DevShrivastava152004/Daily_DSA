//this problem has the optimal solution only
#include<iostream>
#include<vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>>& mat)
{
    int m = mat.size();//find the number of rows in the matrix
    int n = mat[0].size();// this ise used to find the number of columns in the matrix
    int srow =0,scol=0,erow=m-1,ecol=n-1;//srow-->starting row,scol-->starting column
    vector<int>ans;
    while(srow <= erow && scol <= ecol)
    {
        //top row
        for(int j=scol;j<=ecol;j++){
            ans.push_back(mat[srow][j]);
        }


                //right column
        for(int i= srow+1;i<=erow;i++)
            ans.push_back(mat[i][ecol]);

            //bottom row(right to left)
        for(int j=ecol-1;j>=scol;j--)
        {
            if(srow == erow)// to avoid overlapping of rows
                break;
            ans.push_back(mat[erow][j]);
        }

        //left column(bottom to top)
        for(int i = erow-1;i >= srow + 1;i--)
        {
            if (scol == ecol)// this condition is used to check if there is only one column left to print so that we don't print the same column again
            break;
            ans.push_back(mat[i][scol]);
        }
        srow++; 
        erow--;
        scol++;
        ecol--;
    }
    return ans;
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    
    vector<int> result = spiralOrder(matrix);
    
    for(int i=0;i<result.size();i++)
        cout << result[i] << " ";
    cout << endl;
    
    return 0;
}
//this is the optimal approach for printing the spiral order of a matrix
// It has a time complexity of O(m*n) and space complexity of O(1) as we are not using any extra space to store the spiral order of the matrix.