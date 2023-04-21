#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
  ll n, x, sum{}, dismissedKids{};
  cin >> n >> x;
  sum += x;
  for(int i = 0; i < n; i++) {
    char sign;
    ll num;
    cin >> sign >> num;
    if(sign == '+') {
      sum += num;
    } else {
      if (num > sum) {
        dismissedKids++;
      } else {
        sum -= num;
      }
    }
  }
  cout << sum << " " << dismissedKids;
}
