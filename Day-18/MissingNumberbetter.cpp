#include<iostream>
using namespace std;
void findMissingNumber(int arr[],int n)
{
    int hash[n+1]={0};
    for(int i=0;i<n-1;i++)
    {
        hash[arr[i]]=1;
    }
            for(int i=1;i<=n;i++)
            {
                if(hash[i]==0)
                {
                cout<<"THe missing number is-"<<i<<endl;
                return;
                }
            
        }
    }
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n -1; i++)
        cin >> arr[i];
    
    findMissingNumber(arr, n);
    
    return 0;
}
    
    
    
    
    
    
    
    
    
    
