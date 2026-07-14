#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> strs={"eat", "tea", "tan", "ate", "nat", "bat"};
  vector<vector<string>> ans;
  unordered_map<string, vector<string>> mp;
  for (string str: strs) {
    string newstr=str;
    sort(newstr.begin(), newstr.end());
    mp[newstr].push_back(str);
  }
  for (auto it: mp) {
    ans.push_back(it.second);
  }
  for (vector<string> x: ans) {
    for (string y: x) {
      cout << y << " ";
    }
  }
  return 0;
}
