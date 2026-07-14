#include <bits/stdc++.h>
using namespace std;

int main () {
  vector<int> nums={1, 2, 3, 1};
  int temp=0;
  sort(nums.begin(), nums.end());
  for (int i=0; i<nums.size(); i++) {
    if (nums[i]==nums[i+1]) {
      temp=1;
    }
  }
  if (temp==1) {
    cout << "true";
  } else {
    cout << "false";
  }
  return 0;
}