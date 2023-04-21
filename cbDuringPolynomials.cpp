#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;
using ll = long long;
//#define dbg(v) \
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
bool can(ll a, ll b, ll c, ll d, ll mid) {
	if (d == a * mid * mid * mid + b * mid * mid + c * mid) {
		return false;
	} else if (d < a * mid * mid * mid + b * mid * mid + c * mid) {
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
	ll n;
	cin >> n;
	for(ll i = 0; i < n; i++) {
		ll a, b, c, d;
		cin >> a >> b >> c >> d;
		ll left{}, right = 100000; // TEST 
		if(d == 0) {
			cout << 0; 
		} else {
			while (left <= right) {
				ll mid = left + (right - left) / 2;
				if(can(a, b, c, d, mid)) {
					left = mid + 1;
				} else {
					right = mid - 1;
				}
			}
			cout << left << "\n";
		}
	}

	// " " << right <<
}


//Approach:
//ll n, input n
//for n times, input a, b, c, d
//binary search, 
//left = 1; right = 100000;
//closest
//under d, move left, above move right

//test out the left and right values, then see which one is close

//can method;
	//if smaller true, else false
