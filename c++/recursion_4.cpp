//check whether a string is palindrome or not using recursion
#include<iostream>
using namespace std;
bool reverse(int i,string &s)
{
    if(i >= s.size()/2)
    return true;
    if(s[i] != s[s.size()-i-1])
    return false;
    return reverse(i+1,s);
}
int main()
{
    string s;
    cout<<"Enter the string to check if it is palindrom or not:";
    cin>>s;
    if(reverse(0,s))
    cout<<"The string is palindrome";
    else
    cout<<"The string is not palindrome";
    return 0;
}
