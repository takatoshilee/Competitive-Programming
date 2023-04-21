/* Approach:
 * input n, int vector, and for loop that input the num of birds in each wire
 * input m, then for loops with two cin's, then if statements
 * */
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  vector<int> v;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int input;
    cin >> input;
    v.push_back(input);
  }
	//cout << "done";
  cin >> m;
  for(int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    if(x < n) {
		v[x] += v[x - 1] - y;// if exist
	}
    v[x - 1] = y;
    if(x > 1) {
		v[x - 2] += y - 1; // if exist
	}
	v[x - 1] = 0;
	//cout << x << " has been set to 0\n";
	//cout << "done" << i << "\n";
	//for(int a : v){
		//cout << v[a] << "\n";
	//}
  }
  for(int a = 0; a < n; a++) {
    cout << v[a] << "\n";
  }
}
