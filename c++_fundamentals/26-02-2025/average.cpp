#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of students-"<<endl;
    cin>>n;
    double marks[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter marks for students"<< i+1 <<":"<<endl;
        cin>>marks[i];
    }
    double sum = 0;
    for(int i =0 ;i<n;i++)
    {
        sum+=marks[i];
    }
    double average = sum / n;
    cout<<"Average marks: "<<average<<endl;
    return 0;

}