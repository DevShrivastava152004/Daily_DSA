#include<iostream>
using namespace std;
int add(int x,int y)
{
    int sum = x+ y;
    return sum;
}
int main()
{
    int arr[] = {3,7,12,5};
    int sum = add(arr[0],arr[3]);
    cout<<"Sum of the 1st and 4th elements of array are:"<<sum<<endl;
return 0;
}