//2. Delete Middle Element of a Stack using Recursion

#include <bits/stdc++.h>
using namespace std;
void deleteMid(stack<int>& s, int k) {
    if (k == 1) {
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    deleteMid(s, k - 1);
    s.push(temp);
}
int main() {
    int n;
    cin >> n;
    stack<int> s;
    for (int i = 0; i < n; i++) {
        int x; cin >> x; s.push(x);
    }
    deleteMid(s, (n / 2) + 1);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}

