#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, count{};
  cin >> n;
  vector<int> v;
  for(int i = 0; i < n; i++) {
    int input;
    cin >> input;
    v.push_back(input);
  }
  sort(v.begin(), v.end());
  for(int i = 1; i < n - 1; i++) {
      if(v[i] != v[0] && v[i] != v[n - 1]) {
          count++;
      }
  }
  cout << count;
}
