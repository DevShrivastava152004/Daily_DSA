#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the total number of inputs: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
     {
        cout << "Enter element " << i << ": ";
        cin >> arr[i];
    }
    int k;
    cout << "Enter the target value: ";
    cin >> k;
    int found = 0; 
    for (int a = 0; a < n; a++)
     {
        for (int b = a + 1; b < n; b++)
         {
            if (arr[a] + arr[b] == k) 
            {
                cout << "We got the indexes, and they are: " << a << ", " << b << endl;
                found = 1; 
            }
        }
    }
    if (found != 1) 
    {
        cout << "No such indices found for the target value." << endl;
    }
    return 0;
}