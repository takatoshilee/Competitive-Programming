#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n, k;
  cin >> n >> k;
  
  /*for(int i : v) {
    cout << i << " ";
  }*/
  if(n % 2 == 0) {
    if(k > n / 2) {
      cout << 2 * (k - n / 2);
    } else {
      cout << 2 * k - 1;
    }
  } else { //k = 5
    if(k > n / 2 + 1) {
      cout << 2 * (k - n / 2 - 1);
    } else {
      cout << 2 * k - 1;
    }
  }
}

/* 10
 * 1 3 5 7 9 2 4 6 8 10
 * 7
 * 1 3 5 7 2 4 6
 * 8
 * 1 3 5 7 2 4 6 8
 * */
