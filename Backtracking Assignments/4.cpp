//4. Combinations 

#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void solve(int n, int k, int start, vector<int>& comb) {
    if (comb.size() == k) {
        ans.push_back(comb);
        return;
    }
    for (int i = start; i <= n; i++) {
        comb.push_back(i);
        solve(n, k, i + 1, comb);
        comb.pop_back();
    }
}
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> comb;
    solve(n, k, 1, comb);
    for (auto& v : ans) {
        for (int x : v) cout << x << " ";
        cout << "\n";
    }
}
