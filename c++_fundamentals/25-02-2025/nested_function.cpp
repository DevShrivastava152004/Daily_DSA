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
    cout << "Enter number 1: ";
    cin >> a;
    cout << "Enter number 2: ";
    cin >> b;
    Add(a,b);
    return 0;
}
//basically its like calling a function within a function
//function ke andar function use krna 