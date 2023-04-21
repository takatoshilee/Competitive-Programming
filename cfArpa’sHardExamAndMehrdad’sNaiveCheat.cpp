#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;

//#define dbg(v)
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
using ll = unsigned long long;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout)
	
	string str;
	int n;
	cin >> n;
	if(n == 0) {
		cout << 1;
	} else {
		n = pow(8, n);
		n %= 10;
		cout << n;
	}
}

