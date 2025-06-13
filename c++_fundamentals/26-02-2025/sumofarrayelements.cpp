#include<iostream>
using namespace std;
int main()
{
    int arr[4] = {9,3,12,7};
    int sum = 0;
    for (int i=0; i<4; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of the array: " << sum << endl;
    return 0;
}