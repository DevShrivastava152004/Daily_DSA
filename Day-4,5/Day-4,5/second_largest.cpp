#include <iostream>
#include <climits>
using namespace std;
int main()
{
int n;
cout << "Enter the size of the elements";
cin >> n;
int arr[n];
cout<<"Enter "<<n<<"eelements";
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
int largest = INT_MIN;
int secondLargest = INT_MIN;
for(int i  =0;i<n;i++)
{
    if(arr[i] > largest)
    {
        secondLargest=largest;
        largest=arr[i];
    }
    else if(arr[i] >secondLargest && arr[i] != largest)
    {
        secondLargest = arr[i];
    }
}
if(secondLargest == INT_MIN)
{
    cout << "Second largerst element do not exist as all the elements are same";
}
else 
{
    cout<<"Second largest element is-" <<secondLargest << endl;
}
return 0;
}

