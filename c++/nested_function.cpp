#include <iostream>
#include <cmath>
using namespace std;
void Add(int a, int b){
    
    int sum = a + b;
    cout << sum << endl;
    Add(a,b);
    
}
int main(){
    
    int a,b;
    /* Input numbers from user */
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;
    
    //We have to calculate Square Of Sum Of two Numbers (a+b)^2
    Add(a,b);
    return 0;
}
