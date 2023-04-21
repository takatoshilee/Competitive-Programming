#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int n, prevAns;
vector<ll> v;
vector<ll> ft;


int query(int x) {
	int res = 0; 
	for(;x;x-=(x&-x)) res += ft[x];
	return res;
}

void update(int x, int y) {
	for(;x<=n;x+=(x&-x)) ft[x] += y;
}


bool can(int x) {
	if(query(x) == x) {
		return true;
	} else {
		return false;
	}
}

int main() {
	cin >> n;
	v.assign(1000005, 0);
	ft.assign(1000005, 0);
	for(int i = 0; i < n; i++) {
		ll a, b;
		cin >> a >> b;
		if(b > 1000000) {cout << prevAns << endl; continue;}
		if(a == 1) {
			
			if(v[b] == 0) {
				update(b, 1);
			}
			v[b]++;
		} else {
			if(v[b] == 0) {
				cout << prevAns << endl;
				continue;
			}
			v[b]--;
			if(v[b] == 0) {
				update(b, -1);
			}
		}
		int l = 0; //TEST 0 1
		int r = n; 
		int ans = -1;
		while (l <= r) {
			int mid = l + (r - l) / 2;
			if(can(mid)) {
				l = mid + 1;
				ans = mid;
			} else {
				r = mid - 1;
			}
		}
		//correctfor(auto j : v) {
			//cout << j << " ";
		//}cout << endl;
		//for(int j = 1; j <= n; j++) {
			//cout << query(j) - query(j - 1) << " ";
		//}cout << endl;
		cout << ans << endl;
		prevAns = ans;
	}
}
