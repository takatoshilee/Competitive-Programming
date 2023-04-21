#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;

#define dbg(v) \
	cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int prime(int n) {
	while(true) {
		n++;
		bool prime = true;
		for(int j = 2; j < n; j++) {
			if(n % j == 0) {
				prime = false;
			}
		}
		if(prime == true) {
			return n;
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	if(prime(n) == m) {
		cout << "YES";
	} else {
		cout << "NO";
	}
}
