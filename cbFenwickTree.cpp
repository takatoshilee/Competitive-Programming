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

int n;
vt<int> v1; // origional
vt<int> ft; //fenwick

void update(int x, int v) {
	for(; x <= n; x+= (x&-x)) ft[x] += v;
}

int query(int x) {
	int res = 0;
	for(;x;x -= (x&-x)) {
		res += ft[x];
	}
	return res;
}



int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	cin >> n;

	//populate array
	for(int i = 0; i < n; i++) {
		int input;
		cin >> input;
		v1.push_back(input);
	}
	
	//populate fenwick
	ft.assign(n, 0);
	for(int i = 1; i <= n; i++) {
		update(i, v1[i - 1]);
	}
	//cout << "\n";
	//for(auto i : ft) {
		//cout << i << " ";
	//}
	//cout << "\n";
	int m;
	cin >> m;
	for(int i = 0; i < m; i++) {
		int t;
		cin >> t;
		if(t == 0)  {
			int a, b;
			cin >> a >> b;
			cout << query(b + 1) - query(a) << "\n";
		} else if (t == 1){
			int a, b, c;
			cin >> a >> b >> c;
			for(int j = a; j <= b; j++) {
				update(j, c);
			}
		}
	}
}
