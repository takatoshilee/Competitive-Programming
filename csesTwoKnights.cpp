#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;

//#define dbg(v) \
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
	
#define ll long long
#define ld long double

#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()

#define print1D(A) for (int k=0;k<A.size();k++) cout << A[k] << ((k==A.size()-1) ?'\n':' ')
#define print2D(A) for (int i=0;i<A.size();i++) print1D(A[i])


template<class H, class... T> void DBG(H h, T... t) {
	cerr << to_string(h);
	if(sizeof...(t))
		cerr << ", ";
	DBG(t...);
}
#ifdef _DEBUG
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	ll k; 
	cin >> k;
	for(ll i = 1; i <= k; i++) {
		if(i == 1) {
			cout << 0 << endl;
			continue;
		}
		ll c1, c2, c3, c4, c5;
		c1 = (i * i - 3) * 4;
		c2 = (i * i - 4) * 8;
		c3 = (i * i - 5) * (12 + 4 * (i - 6));
		c4 = (i * i - 7) * (4 * (i - 4));
		ll total = 4 + 8 + 12 + 4 * (i - 6) + 4 * (i - 4);
		c5 = (i * i - 9) * (i * i - total);
		cout << (c1 + c2 + c3 + c4 + c5) / 2 << endl;
	}
}
