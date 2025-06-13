#include<iostream>
using namespace std;
int main()
{
    string text = "Bolt";
    cout << "Original text: " << text << endl;
    text[0] = 'G';
    text[3] = 'f';
    cout << "Updated text: " <<text;
    return 0;
}