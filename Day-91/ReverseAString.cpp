  #include<iostream>
  #include<vector>
  using namespace std; 
   
   void reverseString(vector<char>& s) {
        int st = 0, end = s.size()-1;

        while(st <  end){
            swap(s[st++], s[end--]);
        }
        
    }
    int main()
    {
        int n;
        cout<<"Enter the size of array: ";
        cin>>n;
        vector<char> s(n);
        cout<<"Enter the characters: ";
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        reverseString(s);
        cout<<"Reversed string is: ";
        for(char c : s)
            cout<<c;
        cout<<endl;
        return 0;
    }