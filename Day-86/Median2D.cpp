#include<iostream>
#include<vector>
#include<algorithm>// used for sort function
using namespace std;
int median(vector<vector<int>> matrix,int m,int n)
{
    vector<int> list;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            list.push_back(matrix[i][j]);
        }
    }
    sort(list.begin(),list.end());
    return list[(m*n)/2];
}
int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4, 5},
        {8, 9, 11, 12, 13},
        {21, 23, 25, 27, 29}
    };
    int m = matrix.size(), n = matrix[0].size();
    int ans = median(matrix, m, n);
    cout << "The median element is: " << ans << endl;
    return 0; 
}
// the time complexity of this code is O(m*n log(m*n)) because of the sorting step
// the space complexity of this code is O(m*n) because we are using an extra array