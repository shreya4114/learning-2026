#include <bits/stdc++.h>
using namespace std;

int main() {
  string s="abciiidef";
  int k=3;
  bool isVowel[128]={false};
  isVowel['a']=isVowel['e']=isVowel['i']=isVowel['o']=isVowel['u']=true;
  int currvowel=0;
  int maxvowel=0;
  for (int i=0; i<k; i++) {
    if (isVowel[s[i]]) {
      currvowel++;
    }
  }
  maxvowel=currvowel;
  for (int i=k; i<s.length(); i++) {
    if (isVowel[s[i-k]]) {
      currvowel--;
    }
    if (isVowel[s[i]]) {
      currvowel++;
    }
    maxvowel=max(maxvowel, currvowel);
  }
  cout << maxvowel;
  return 0;
}