#include<iostream>
#include<vector>
using namespace std;
void MissingRepeating(vector<int>& arr,int n)
{
    int repeating = -1;
    int missing = -1;
    for(int i=1;i<=n;i++)
    {
        int cnt = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[j] == i)
            cnt++;
        }
        if(cnt == 2)
        repeating = i;
        else if(cnt == 0)
        missing = i;
    }
        if(repeating != -1 && missing !=-1)
        cout<<"The value which is repeating in the array is "<<repeating<<"and the value that is missing is"<<missing;
        else
        cout<<"the value is not found correctly"<<endl;
    }
int main()
{
    vector<int> arr = {4,3,6,2,1,1};
    int n = arr.size();
    MissingRepeating(arr,n);
    return 0;

}