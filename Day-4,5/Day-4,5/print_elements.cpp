// iterative method
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout<<"Enter the size of the elements you want to enter";
//     cin>>n;
//     int arr[n];
//     for(int i =0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Array Elements";
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
void printElementsRecursive(int arr[],int index,int n)
{
    if(index == n)
    return;
    cout << arr[index] << " ";
    printElementsRecursive(arr ,index+1,n);//for again calling that function
}
int main()
{
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    int arr[n];
    cout << "Enter" <<n<<"Elements";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"The elements are-";
    printElementsRecursive(arr,0,n);
    cout<<endl;
    return 0;
}