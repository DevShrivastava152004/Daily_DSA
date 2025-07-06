#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
vector<vector<int>> triplet(int n, vector<int>& num)
{
    set<vector<int>> st;  
    for (int i = 0; i < n; i++) 
    {
        for (int j = i + 1; j < n; j++) 
        {
            for (int k = j + 1; k < n; k++)
             {
                if (num[i] + num[j] + num[k] == 0)
                 {
                    vector<int> temp = {num[i], num[j], num[k]};
                    sort(temp.begin(), temp.end());  
                    st.insert(temp);  
                }
            }
        }
    }
    vector<vector<int>> res(st.begin(), st.end());
    return res;
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> num(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    vector<vector<int>> ans = triplet(n, num);

    cout << "Triplets with sum 0 are:\n";
    if (ans.empty()) 
    {
        cout << "No triplets found.\n";
    } 
    else 
    for (int i = 0; i < ans.size(); i++) 
    {
            for (int j = 0; j < ans[i].size(); j++) 
            {
                cout << ans[i][j] << " ";
            }
    }
            cout << endl;
    return 0;
}