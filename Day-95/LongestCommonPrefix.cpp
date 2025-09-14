#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
string longestCommonPrefix(vector<string>&  str)
{
    if(str.size() == 0)
        return "";
    sort(str.begin(), str.end());
    string first = str[0];
    string last = str[str.size() - 1];
    string ans = "";
    int minLength = min(first.size() , last.size());
    for(int i = 0;i < minLength; i++)
    {
    if(first[i] != last[i]) // ye hum check kar rahe hain ki first aur last string ke characters same hain ya nahi
    break;
    ans += first[i];
}
return ans;
}
int main() 
{
    vector<string> strings = {"flower","flow","flight"};
    string result = longestCommonPrefix(strings);
    cout << "Longest Common Prefix: " << result << endl;
    return 0;
}
// the time complexity is O(n log n) and space complexity is O(1)
