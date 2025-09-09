#include<iostream>
#include<string>
using namespace std;
string LargrstOddNumber(string num)
{
    for(int i=num.size()-1;i>=0;i--)
    {
        if((num[i] - '0') % 2 != 0)
        {
            return num.substr(0,i+1);
        }
    }
    return "";
}
int main()
{
    string num;
    cout<<"Enter a name: ";
    cin>>num;
    string result = LargrstOddNumber(num);
    if(result != "")
        cout<<"Largest odd number is: "<<result<<endl;
    else
        cout<<"No odd number found."<<endl;
    return 0;
}