#include <iostream>
#include <string>
using namespace std;

bool palindrome(string s, int st, int end) {
    if (st >= end) return true;  
    
    if (s[st] != s[end]) return false;
    
    return palindrome(s, st + 1, end - 1);
}

int main() {
    cout << "Hello, World!" << endl;
    string s;
    cin >> s;
    cout << palindrome(s, 0, s.length() - 1);
    return 0;
}
