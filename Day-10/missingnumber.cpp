#include<iostream>
using namespace std;
int  missingnumber(int arr[],int n)
{
int xor1=0,xor2=0;
//xpr1 will store XOR of numbers from 1 to n
//whereas xor2 will store XOR of all elements in the array
        for(int i=0;i<n;i++)
        {
            xor2=xor2^arr[i];//ex if nums = [3,0,1] this will become 3^0^1
            xor1=xor1^(i+1);//loop goes from 0 to n-1 --> i+1 giex 1 to n
        }
        return xor1^xor2;
        //this will return the missing number because in XOR duplicate numbers cancel out each other (a^a=0)
}
        int main()
        {
            int n;
            cout<<"Enter the size of the array";
            cin>>n;
            int arr[n];
            cout<<"Enter the elements";
            for(int i=0;i<n;i++)
            cin>>arr[i];
            int result=missingnumber(arr,n);
            cout<<"Missing number is:-"<<result;
            return 0;
        }
    