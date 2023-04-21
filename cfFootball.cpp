/* Approach:
 * input int n;
 * map<string, int> m, and set<string> s; then a for loop that gos through all the input, and adds to map, and string to s
 * */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, max{};
  string maxString;
  cin >> n;
  map<string, int> m;
  set<string> s;
  for(int i = 0; i < n; i++) {
    string input;
    cin >> input;
    m[input]++;
    s.insert(input);
    if(m[input] > max) {
      max = m[input];
      maxString = input;
    }
  }
  cout << maxString;
}
