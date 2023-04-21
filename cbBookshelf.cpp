#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;

//#define dbg(v) \
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
	
#define ll long long
#define ld long double
#define ar arrayOHH

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
	ll n; 
	cin >> n;
	map<ll, ll> m;
	ll left{}, right{};
	for(ll i = 0; i < n; i++){
		ll input;
		cin >> input;
		if(input == 1) {
			ll a;
			cin >> a;
			m[a] = left;
			if(left == right){
				left--;
				right++;
			} else {
				left--;
			}
		} else if(input == 2) {
			int a;
			cin >> a;
			m[a] = right;
			if(left == right){
				left--;
				right++;
			} else {
				right++;
			}
		} else if(input == 3) {
			left++;
		} else if(input == 4) {
			right--;
		} else if(input == 5) {
			int a;
			cin >> a;
			if(left * m[a] < 0) {
				cout << abs(abs(left) + m[a]) << "\n";
			} else {
				cout << abs(abs(m[a]) - abs(left)) << "\n"; 
			}
		} else if(input == 6) {
			int a;
			cin >> a;
			if(right * m[a] < 0) {
				cout << abs(abs(m[a]) + right) << "\n";
			} else {
				cout << abs(abs(right) - abs(m[a]))  << "\n"; 
			}
		} 
	}
}
