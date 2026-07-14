#include <bits/stdc++.h>
using namespace std;

int main () {
  vector<int> nums={1, 7, 3, 6, 5, 6};
  int totalsum=0, leftsum=0;
  for (int i=0; i<nums.size(); i++) {
    totalsum+=nums[i];
  }
  for (int i=0; i<nums.size(); i++) {
    int rightsum=totalsum-leftsum-nums[i];
    if (leftsum==rightsum) {
      cout << i;
    }
    leftsum+=nums[i];
  }
  return 0;
}