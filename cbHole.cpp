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
	int n, k;
	cin >> n >> k;
	vt< vt<int> > v1;
	v1.assign(n, vt<int>());
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			v1[i].pb(0);
		}
	}
	
	for(int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;
		v1[a][b]++;
	}
	
	vt<vt<int> > v2; // prefix
	v2.assign(n, vector<int>());
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i == 0 && j == 0) {
				v2[i].push_back(v1[i][j]);
			} else if(i == 0) {
				v2[i].push_back(v1[i][j] + v2[i][j - 1]);
			} else if(j == 0) {
				v2[i].push_back(v1[i][j] + v2[i - 1][j]);
			} else {
				v2[i].push_back(v1[i][j] + v2[i - 1][j] + v2[i][j - 1] - v2[i - 1][j - 1]);
			}
		}
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << v1[i][j] << " ";
		}
		cout << "\n";
	}
	cout << endl;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << v2[i][j] << " ";
		}
		cout << "\n";
	}
}
