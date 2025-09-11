#include<iostream>
#include<string>
using namespace std;
    
        bool isAlphaNum(char ch)
        {
            if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
            {
                return true;
            }
            return false;
        }
        bool isPalindrome(string s) {

        int st = 0, end = s.length()-1;
        while(st < end)
        {
            if(!isAlphaNum(s[st]))
            {
                st++; continue;
            }
            if(!isAlphaNum(s[end]))
            {
                end--; continue;
            }
            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }
            st++; end--;
        }
        return true;
    }
    int main()
    {
        string s1 = "A man, a plan, a canal: Panama"; // ✅ Palindrome
    string s2 = "race a car";                     // ❌ Not palindrome
    string s3 = " ";                              // ✅ Empty/space is palindrome
    string s4 = "No lemon, no melon";             // ✅ Palindrome
    string s5 = "12321";                          // ✅ Palindrome numbers
    string s6 = "12345";                          // ❌ Not palindrome

    cout << s1 << " -> " << (isPalindrome(s1) ? "True" : "False") << endl;
    cout << s2 << " -> " << (isPalindrome(s2) ? "True" : "False") << endl;
    cout << s3 << " -> " << (isPalindrome(s3) ? "True" : "False") << endl;
    cout << s4 << " -> " << (isPalindrome(s4) ? "True" : "False") << endl;
    cout << s5 << " -> " << (isPalindrome(s5) ? "True" : "False") << endl;
    cout << s6 << " -> " << (isPalindrome(s6) ? "True" : "False") << endl;
    return 0;

    }