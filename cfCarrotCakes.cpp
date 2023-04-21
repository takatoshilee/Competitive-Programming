/* Approach:
 * input the values
 * init time to make w one oven and time to make with two oven
 * */
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, t, k, d, oneOven, twoOven;
  cin >> n >> t >> k >> d;
  oneOven = n / k * t;
  twoOven = d + (n / (k * 2)) * t;
  cout << oneOven << twoOven;
  if(oneOven <= twoOven) {
    cout << "NO";
  } else {
    cout << "YES";
  }
}
