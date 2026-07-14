#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> prices={7, 1, 5, 3, 6, 4};
  int maxprofit=0;
  int minprice=INT_MAX;
  for (int val: prices) {
    if (val<minprice) {
      minprice=val;
    } else if (val-minprice>maxprofit) {
      maxprofit=val-minprice;
    }
  }
  cout << maxprofit;
  return 0;
}