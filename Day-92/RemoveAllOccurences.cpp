#include<iostream>
#include<string>
using namespace std;
string removeOcccurences(string s,string part)
{
    while(s.length() > 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part),part.length());
    }
    return s;
}
int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";
    cout<<removeOcccurences(s,part)<<endl;
    return 0;
}
