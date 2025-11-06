// 3. Letter Combinations of a Phone Number

#include <bits/stdc++.h>
using namespace std;
vector<string> res;
vector<string> mp = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
void backtrack(string &digits, int idx, string cur)
{
  if (idx == digits.size())
  {
    if (!cur.empty())
      res.push_back(cur);
    return;
  }
  for (char c : mp[digits[idx] - '0'])
    backtrack(digits, idx + 1, cur + c);
}
int main()
{
  string digits;
  cin >> digits;
  backtrack(digits, 0, "");
  for (auto &s : res)
    cout << s << " ";
}
