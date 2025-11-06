//5. Letter Tile Possibilities

#include <bits/stdc++.h>
using namespace std;
int countSeq(unordered_map<char,int>& m) {
    int total = 0;
    for (auto& p : m) {
        if (p.second == 0) continue;
        total++;
        p.second--;
        total += countSeq(m);
        p.second++;
    }
    return total;
}
int main() {
    string tiles;
    cin >> tiles;
    unordered_map<char,int> m;
    for (char c : tiles) m[c]++;
    cout << countSeq(m);
}
