#include <bits/stdc++.h>
using namespace std;

int main() {
  string s="A man, a plan, a canal: Panama";
  int l=0;
  int r=s.length()-1;
  while (l<r) {
    while (l<r && !isalnum(s[l])) {
      l++;
    } 
    while (l<r && !isalnum(s[r])) {
      r--;
    }
    if (tolower(s[l]) != tolower(s[r])) {
      cout << "false";
    } else {
      cout << "true";
    }
    l++;
    r--;
  }
  
  return 0;
}