#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> generate(int numRows)
{  
    vector<vector<int>> result(numRows); // this is used to create a 2D vector with numRows, Each row will be filled later
    for (int i = 0; i < numRows; i++) // Loop through each row
    {
        result[i] = vector<int>(i + 1, 1); // Initialize row elements as 1
        for (int j = 1; j < i; j++) // Fill the middle elements
        {
            result[i][j] = result[i - 1][j] + result[i - 1][j - 1];
        }
    }
    return result;
}

int main()
{
    int numRows;
    cout << "Enter the size for the number of rows for creating the Pascal's triangle: ";
    cin >> numRows;

    vector<vector<int>> n = generate(numRows);

    cout << "\nPascal's triangle up to " << numRows << " rows:\n";

    for (int i = 0; i < n.size(); i++) // for rows
    {
        for (int j = 0; j < n[i].size(); j++) // for columns
        {
            cout << n[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
