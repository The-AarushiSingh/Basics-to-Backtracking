//1. Print N-bit Binary Numbers having more 1s than 0s

#include <bits/stdc++.h>
using namespace std;
void solve(int n, int one, int zero, string op) {
    if (n == 0) {
        cout << op << " ";
        return;
    }
    solve(n - 1, one + 1, zero, op + '1');
    if (one > zero) solve(n - 1, one, zero + 1, op + '0');
}
int main() {
    int n;
    cin >> n;
    solve(n, 0, 0, "");
}
