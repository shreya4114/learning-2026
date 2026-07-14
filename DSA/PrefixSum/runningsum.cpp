#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> ans;
  vector<int> nums={1, 2, 3, 4};
  int sum=0;
  for (int i=0; i<nums.size(); i++) {
    sum+=nums[i];
    ans.push_back(sum);
  }
  for (int x: ans) {
    cout << x << " ";
  }
  return 0;
}