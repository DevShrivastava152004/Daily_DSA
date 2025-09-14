#include<iostream>
#include<vector>
#include<string>// taki hum to_String() use kr saken (count to string me convert karne ke liye)
using namespace std;
int compress(vector<char>& chars)
{
    int  n= chars.size();
    int idx = 0;//index
    for(int i=0;i<n;i++)
    {
        char ch = chars[i];
        int count = 0;

        while(i < n && chars[i] == ch)
        {
            count++;
            i++;
        }

        if(count == 1)
        {
            chars[idx++] = ch;
        }
         else
        {
            chars[idx++] = ch;
            string str = to_string(count);// ye humne to_string use kiya hai count ko string me convert karne ke liye
            for(int j=0; j<str.size(); j++)// this is modern cpp - for(char dig : str)
            {
                chars[idx++] = str[j];
            }
        }
        i--;
    }
    chars.resize(idx);
    return idx;
}
int main()
{
    vector<char> chars = {'a','a','b','b','c','c','c'};
    int newLength = compress(chars);
    cout << "New Length: " << newLength << endl;
    cout << "Compressed Array: ";
    for(int i = 0; i < newLength; i++)
    {
        cout << chars[i] << " ";
    }
    cout << endl;
    return 0;
}
