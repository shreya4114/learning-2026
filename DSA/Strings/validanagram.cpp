#include <bits/stdc++.h>
using namespace std;

int main() {
  string s="anagram";
  string t="nagaram";
  if (t.length()!=s.length()) {
    cout << "false";
  }
  int freq[26]={0};
  for (int i:s) {
    freq[i-'a']++;
  }
  for (int j:t) {
    freq[j-'a']--;
  }
  for (int i=0; i<26; i++) {
    if (freq[i]!=0) {
      cout << "false";
    }
  }
  cout << "true";
  return 0;
}