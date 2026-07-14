#include <bits/stdc++.h>
using namespace std;

int main () {
  vector<int> nums={1, 12, -5, -6, 50, 3};
  int k=4;
  double currentsum=accumulate(nums.begin(), nums.begin()+k, 0.0);
  double maxsum=currentsum;
  for (int i=k; i<nums.size(); i++) {
    currentsum+=nums[i]-nums[i-k];
    maxsum=max(maxsum, currentsum);
  }
  cout << maxsum/k;
  return 0;
}