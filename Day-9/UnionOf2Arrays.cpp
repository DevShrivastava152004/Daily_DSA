#include<iostream>
#include<vector>
#include<set>
using namespace std;
vector<int> findunion(int arr1[],int arr2[],int n1,int n2)
{
    set<int> st;
    for(int i =0;i<n1;i++)
    {
        st.insert(arr1[i]);
    }
    for(int i=0;i<n2;i++)
    {
        st.insert(arr2[i]);
    }
    vector<int>temp;
    for(auto it: st)
    {
        temp.push_back(it);
    }
    return temp;
}
int main()
{
    int n1,n2;;
    cout<<"Enter the size of the array1-";
    cin>>n1;
    int arr1[n1];
    cout<<"Enter the elements-";
    for(int i=0;i<n1;i++)
        cin>>arr1[i];
        cout<<"Enthe the size of the array2-";
        cin>>n2;
        int arr2[n2];
        cout<<"Enter the elements";
        for(int j=0;j<n2;j++)
        cin>>arr2[j];
        vector<int> result=findunion(arr1,arr2,n1,n2);//agar return value store krna hai toh variable ka type bhi vector<int> hi lena padega na ya fir auto result.. likhde toh usse khud woh decide krlega,perks of modern c++ style
        for(int val : result)//no index access we could have also used for(int i=0;i<result.size();i++)
        {
            cout << val << " ";//another use of modern c++ style where i have used range based for loop am easy and clear approach
        }
        return 0;
}