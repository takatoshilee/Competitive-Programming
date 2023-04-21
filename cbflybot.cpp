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
	ll r, c;
	cin >> r >> c;
	vector<vector<char> > v(r, vector<char>()); //input vector
	vector<vector<ll> > dp(r, vector<ll>()); //dp vector
	for(ll i = 0; i < r; i++) {
		for(ll j = 0; j < c; j++) {
			char a;
			cin >> a;
			v[i].pb(a);
		}
	}

	for(ll i = 0; i < r; i++) {
		for(ll j = 0; j < c; j++) {
			if(i == 0 && j == 0) {
				dp[0].pb(1);//base case;
			} else {
				if(v[i][j] == 'X') {
					dp[i].pb(0);
				} else {
					if(i == 0) {
						dp[i].pb(dp[i][j - 1]);
					} else if (j == 0) {
						dp[i].pb(dp[i - 1][j]);
					} else {
						dp[i].pb((dp[i - 1][j] + dp[i][j - 1]) % 1000000007);
					}
				}
			}
		}
	}
	//print2D(dp);
	cout << dp[r - 1][c - 1];
	
}
