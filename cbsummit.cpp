#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;
using ll = long long;
//#define dbg(v) \
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
bool can(ll a, ll b, ll c) {
	ll sum = {}, count = c + 1;
	sum += a;
	sum += a / c;
	a = a / c;
	while (a != 0) {
		//sum += temp;
		//cout << "sum: " << sum << " " << temp << "\n";
		//temp = a;
		//temp /= c;
		//extra++;
		//c *= extra;
		a /= count;
		sum += a;
		count++;
	}
	//cout << "finalsum: " << sum << " " << a << "\n";
	if(sum >= b) {
		return false;
	} else {
		return true;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	ll m, d;
	cin >> m >> d;
	ll left = 0, right = m; //TET
	while(left <= right) {
		int mid = left + (right - left) / 2;
		//cout << mid << "\n";
		if(can(mid, m, d)) {
			left = mid + 1;
		} else {
			right = mid - 1;
		}
	}
	cout << left;
}
