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
	//int k;
	//cin >> k;
	//while (k--) {
		ll n;
		cin >> n;
		ll sum = .5*n*n + .5*n ;
		//cout << sum;
		if(sum % 2 == 0) {
			cout << "YES\n";
			if(n % 2 == 0) {
				cout << n / 2 << endl;
				for(ll j = 1; j <= n;) {
					cout << j << " ";
					if(j % 2 == 0) {
						j++;
					} else {
						j += 3;
					}
				}
				cout << endl << n / 2 << endl;
				for(ll j = 2; j < n;) {
					cout << j << " ";
					if(j % 2 == 0) {
						j++;
					} else {
						j += 3;
					}
				}
			} else {
				cout << n / 2 << endl;
				for(ll i = 3; i <= n;) {
					cout << i << " ";
					if(i % 2 == 0) {
						i += 3;
					} else {
						i++;
					}
				} cout << endl;
				cout << n / 2 + 1<< endl;
				for(ll i = 1; i < n;) {
					cout << i << " ";
					if(i % 2 == 0) {
						i += 3;
					} else {
						i++;
					}
				}
			}
			
		} else {
			cout << "NO\n";
			//return 0;
		}
	//}
	
}


