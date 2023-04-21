/* Approach:
 * input int n;
 * input int p
 * for loop for p, then add all numbers to the set
 * do that twice
 * if set's size = n; then do the ifs
 * */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, p;
  set<int> s;
  cin >> n >> p;
  for(int i = 0; i < p; i++) {
    int input;
    cin >> input;
    s.insert(input);
  }
  cin >> p;
  for(int i = 0; i < p; i++) {
    int input;
    cin >> input;
    s.insert(input);
  }
  if(s.size() == n) {
    cout << "I become the guy.";
  } else {
    cout << "Oh, my keyboard!";
  }
}
