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

ll n;
vector<ll> ft;

ll query(ll x) {
	ll res = 0;
	for(;x;x-=(x&-x)) res += ft[x];
	return res;
}

void update(int x, int v) {
	for(;x<=n;x+=(x&-x)) ft[x] += v;
}



int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	cin >> n;
	ft.assign(n + 1, 0);
	for(ll i = 0; i < n; i++) {
		//for(auto x : ft) {
			//cout << x << " ";
		//} cout << endl;
		int a, b;
		cin >> a >> b;
		if(a == 1) {
			update(b, 1);
		} else {
			update(b, -1);
		}
		
		for(ll j = 1; j <= n; j++) {
			if(query(j) - query(j - 1) == 0) {
				cout << j - 1;
				cout << endl;
				break;
				
			}
		}
	}
	

	
	
	
}
