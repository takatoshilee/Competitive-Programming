#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;

#define dbg(v) \
	cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
	
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
//#ifdef _DEBUG
//#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
//#else
//#define dbg(...) 0
//#endif

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	int n;
	cin >> n;
	int top;
	cin >> top;
	int bottom;
	for(int i = 0 ; i < n; i++) {
		bottom = 7 - top;
		int a, b;
		cin >> a >> b;
		if(a == bottom || b == bottom || a == top || b == top) {
			cout << "NO";
			return 0;
		} 
	}
	cout << "YES";
}


//Approach:

