#include <bits/stdc++.h>
//#include "debugging.h"
using namespace std;

//#define dbg(v)
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < n * m; i++) {
		char a; cin >> a;
		if(a == 'C' || a == 'M' || a == 'Y') {
			cout << "#Color";
			exit(0);
		}
	}
	cout << "#Black&White";
}

