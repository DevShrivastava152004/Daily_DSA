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
    cout << (rotateString(s, goal) ? "true" : "false") << endl;
    goal = "adeac";
    cout << (rotateString(s, goal) ? "true" : "false" ) << endl;

    return 0;
}