#include<iostream>
#include<string>
using namespace std;
bool rotateString(string s, string goal)
{
    if(s.length() != goal.length())
    {
        return false;
    }
    string doubled = s + s;
    return doubled.find(goal) != string::npos;
}
int main()
{
    string s = "abcde";
    string goal = "cdeab";
    if(rotateString(s, goal))
    {
        cout << "true" << endl;
    }
    else 
    {
        cout <<" false" << endl;
    }
    goal = "adeac";
    if(rotateString(s, goal)){
        cout << "true" << endl;
    }
    else {
        cout << "false" <<endl;
    }
    return 0;
}
// the time complexity is O(n) and space complexity is O(n)