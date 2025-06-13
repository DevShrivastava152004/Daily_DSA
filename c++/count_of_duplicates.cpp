#include <iostream>
using namespace std;
int main()
 {
    int n;
    cout << "Enter the n0. of elements: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
     {
        cout << "Enter the elements"<< i+1<<": ";
        cin >> arr[i];
    }
    int count = 0;
    cout << "Duplicate elements are: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == -1) 
        {
            continue;
        }
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[i] == arr[j])
             {
                cout << arr[i] << endl;  
                count++;
                arr[j] = -1; 
                break; 
            }
        }
    }
    cout << "Count of duplicates-" << count << endl;
    return 0;
}
