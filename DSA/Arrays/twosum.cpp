#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> ans;
  vector<int> nums={2, 7, 11, 15};
  int target=9;
  for (int i=0; i<nums.size(); i++) {
    for (int j=i+1; j<nums.size(); j++) {
      if (nums[i]+nums[j]==target) {
        ans.push_back(i);
        ans.push_back(j);
      }
    }
  }
  for (int x:ans) {
    cout << x << " ";
  }
  return 0;
}