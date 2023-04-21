#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main() {
  ll n;
  cin >> n;
  set<int> s;
  for(int i = 0; i < n; i++) {
    int input;
    cin >> input;
    s.insert(input);
  }
  cout << s.size();
}
