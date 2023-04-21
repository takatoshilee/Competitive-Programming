/* Approach:
 * map<int, bool>, for(go through string) if caps, make it uncaps, and make true if included)
 * for(go through map, if all is true, print, yes, else print no)
 * */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string str;
  map<int, bool> m;
  cin >> n >> str;
  for(int i = 0; i < n; i++) {
    if(str[i] < 97) {
      str[i] += 32;
    }
    m[str[i]] = true;
  }
  /*for(int i = 97; i < 123; i++) {
    cout << m[i] << " ";
  }*/
  for(int i = 97; i < 123; i++) {
    if(m[i] == true) {
      continue;
    } else {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
}
