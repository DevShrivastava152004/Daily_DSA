#include<iostream>
#include<vector>
using namespace std;
bool SearchElement(vector<vector<int>>& matrix,int target){
    {
        int n = matrix.size(),m = matrix[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j] == target)
                return true;
            }
        }
        return false;
    }
}

int main()
{
    vector<vector<int>> matrix = {{1,4,7,11,15}, {2,5,8,12,19}, {3,6,9,16,22}, {10,13,14,17,24},{18,21,23,26,30}};   
    if(SearchElement(matrix, 8) == true )
    {
     cout<<"Element Found"<<endl;
    }
    else
    {
     cout<<"Element Not Found"<<endl;
    }
    return 0;
}