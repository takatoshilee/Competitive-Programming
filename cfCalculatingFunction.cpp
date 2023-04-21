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
	//ll n, sum{}; 
	//cin >> n;
	//for(int i = 1; i <= n; i++) {
		//if(i % 2 == 0) {
			//sum += i;
		//} else {
			//sum += i * -1;
		//}
	//}
	//cout << sum;
	ll n;
	cin >> n;
	if(n % 2 == 0) {
		cout << n / 2;
	} else {
		cout << (n / 2 * - 1) - 1;
	}
}
