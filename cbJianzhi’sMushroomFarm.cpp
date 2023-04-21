#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;
using ll = long long;
#define dbg(v) \
	cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	ll r, c, k, sum{};
	cin >> r >> c >> k;
	vector< vector<int> > v1;
	v1.assign(r, vector<int>());
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			int input;
			cin >> input;
			v1[i].push_back(input);
			if(input >= k) {
				sum++;
			}
		}
	}
	//dbg(sum);
	vector < vector<int> > v2;
	v2.assign(r, vector<int>());
	
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			if(i == 0 && j == 0) {
				v2[i].push_back(v1[i][j]);
			} else if(i == 0) {
				v2[i].push_back(v1[i][j] + v2[i][j - 1]);
			} else if(j == 0) {
				v2[i].push_back(v1[i][j] + v2[i - 1][j]);
			} else {
				v2[i].push_back(v1[i][j] + v2[i - 1][j] + v2[i][j - 1] - v2[i - 1][j - 1]);
			}
		}
	}

	ll current = 2;
	while (current <= min(r, c)) {
		for(int i = 0; i <= r - current; i++) {
			for(int j = 0; j <= c - current; j++) { 
				int a;
				if(i == 0 && j == 0) {
					a = v2[i + current - 1][j + current - 1];
				} else if(i == 0) {
					a = v2[i + current - 1][j + current - 1] - v2[i + current - 1][j - 1];
				} else if(j == 0) {
					a = v2[i + current - 1][j + current - 1] - v2[i - 1][j + current - 1];
				} else {
					a = v2[i + current - 1][j + current - 1] - v2[i + current - 1][j - 1] - v2[i - 1][j + current - 1] + v2[i - 1][j - 1];
				}
				//dbg(a);
				if(a >= k) {
					sum++;
					//cout << i << " " << j << " " << current << "\n";
				}
			}
		}
		current++;
	}
	
	//printing
	//for(int i = 0; i < r; i++) {
		//for(int j = 0; j < c; j++) {
			//cout << v2[i][j] << " ";
		//}
		//cout << "\n";
	//}
	cout << sum;
}
//Approach:
//input r, c, k;
//sum{}
//input r*c elements into a 2d vector, if any is larger than k, sum++, add to prefix 2d vector
//current = 2, current means the length of the square
//while (current <= min(r, c))
	//for(int i = current; i <= min(r, c); i++) {
		//for(int j = current; j <= min(r, c); j++) {
			
		//}
	//}
	//current++;
//cout << sum;
