#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; 
  cin >> n;
  vector<int> v;
  for(int i = 0; i < n; i++) {
    int input;
    cin >> input;
    v.push_back(input);
  }
  for(int i = 0; i < n; i++) {
    if(i == 0) {
      cout << abs(v[i + 1] - v[i]) << " " << abs(v[n - 1] - v[i]) << "\n";//abs needed if only one element but constraints didnt allow anyways
    } else if(i == n - 1) {
      cout << v[i] - v[i - 1] << " " << v[i] - v[0] << "\n";
    } else
      cout << min(v[i] - v[i - 1], v[i + 1] - v[i]) << " " << max(v[i] - v[0], v[n - 1] - v[i]) << "\n";
  }
}
