#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;
using ll = long long;
//#define dbg(v)
//	cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	ll n, m, a;
	cin >> n >> m >> a;
	if (m % a != 0) {
	    m = m / a + 1;
	} else {
	    m /= a;
	}
	if (n % a != 0) {
	    n = n / a + 1;
	} else {
	    n /= a;
	}
	cout << n * m;
}
