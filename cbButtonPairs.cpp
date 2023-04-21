/*
 * Approach:
 * input n;
 * even + odd
 * odd + even
 * XOR
 * ans = even * odd;
 * */

#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(nullptr);
  int n, odd{}, even{};
  cin >> n;
  for(int i = 0; i < n; i++) {
    int input;
    cin >> input;
    if(input % 2 == 0) {
      even++;
    } else 
      odd++;
  }
  cout << odd * even;
}
