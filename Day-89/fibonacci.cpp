// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "Enter the number of terms: ";
//     cin >> n;
//     int t1 = 0, t2 = 1, nextTerm;
//     cout << "Fibonacci Series: ";
//     for (int i = 1; i <= n; i++) 
//     {
//         cout << t1 << " ";
//         nextTerm = t1 + t2; 
//         t1 = t2;
//         t2 = nextTerm;
//     }
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str;
//     cout << "Enter a string: ";
//     cin >> str;

//     int start = 0;
//     int end = str.length() - 1;
//     bool isPalindrome = true;

//     while (start < end) {
//         if (str[start] != str[end]) {
//             isPalindrome = false;
//             break;
//         }
//         start++;
//         end--;
//     }

//     if (isPalindrome) {
//         cout << str << " is a Palindrome." << endl;
//     } else {
//         cout << str << " is NOT a Palindrome." << endl;
//     }

//     return 0;
// }

