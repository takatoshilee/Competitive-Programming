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
#ifdef _DEBUG7
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	ll n, amount;
	cin >> n >> amount;
	vt<ll> coins;
	vt<ll> dp(amount + 1, INT_MAX);
	dp[0] = 0;
	for(ll i = 0; i < n; i++) {
		ll a;
		cin >> a;
		coins.pb(a);
	}
	
	// solve every subproblem from 1 to amount
	for(ll i = 1; i <= amount; i++) {
		//for each coin we are  given 
		for(ll j = 0; j < coins.size(); j++) {
			if(coins[j] <= i) {
				dp[i] = min(dp[i], dp[i - coins[j]] + 1);
			}
		}
	}
	//for(auto i : coins) {
		//cout << i << " ";
	//}cout << "\n";
	for(auto j : dp) {
		cout << j << " ";
	}
	cout << "\n";
	if(dp[amount] == INT_MAX) {
		cout << -1;
	} else cout << dp[amount];
}
