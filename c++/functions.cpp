#include<iostream>
using namespace std;

    string checkEvenOdd(int num)
    {
        if (num % 2==0){
            return "Even";
        } else {
            return "Odd";
        }
    }
    int main()
    {
        int number;
        cout<<"enter the number to find the number is even or odd";
        cin>>number;
        string result=checkEvenOdd(number);
        cout<<number<<"is:"<<result<<endl;
        return 0;
    }
