#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, max; 
  cin >> n;
  max = n;
  map<int, bool> m;
  for(int i = 0; i < n; i++) {
    int input;
    cin >> input;
    m[input] = true;
    while(m[max] == true) {
      cout << max << " ";
      m[max] = false;
      max--;
    }
    if(i != n - 1) {
      cout << "\n";
    }
    //cout << n << " worked at " << i << "\n";
  }
}
