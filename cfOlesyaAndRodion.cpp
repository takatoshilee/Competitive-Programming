/* Approach:
 * input int n and t
 * start for loop with min digits, like 3 = 100, then keep adding until num % t ==0; if not, try till 1000;
 * problem is extremely large numbers tho
 * */

#include <bits/stdc++.h>
using namespace std;
using ll = unsigned long long;

int main() {
  int n, t;
  cin >> n >> t;
  if(n == 1 && t == 10) {
	  cout << -1;
  } else {
	  if(t == 10) {
		  cout << 1;
	  } else {
		  cout << t;
	  }
	  for(int i = 0; i < n - 1; i++) {
		  cout << 0;
	  }
  }
}
