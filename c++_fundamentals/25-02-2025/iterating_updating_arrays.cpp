// #include<iostream>
// using namespace std;
// int main()
// {
//     int numbers[5]={1,2,3,4,5};
//     for(int index=0;index<5;++index)
//     {
//         cout<<numbers[index]<<endl;
//     }
//     return 0;
//}
// #include <iostream>
// using namespace std;
// int main() 
// {
//     int arr[5] = {11,9,2,7,5};
//     arr[3] = 16;
//     for(int i=0 ;i<5;i++)
//     {
//         cout<<arr[i]<<endl;
//     }
//     return 0;
//}
//create a double type named arr with values:2.7,4.3.12.8,5.4
#include<iostream>
using namespace std;
int main()
{
    double arr[4]={2.7,4.3,12.8,5.4};
    arr[1]=3.7;
    arr[3]=6.6;
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<endl;
    }
}