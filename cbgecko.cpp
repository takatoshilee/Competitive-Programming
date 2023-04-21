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
	int r, c;
	cin >> r >> c;
	vector<vector<int> > v; //initial vector
	vector<vector<int> > ps; // prefix
	v.assign(r, vector<int>());
	ps.assign(r, vector<int>());
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			int a;
			cin >> a;
			v[i].push_back(a);
			if(i == 0) {
				ps[i].push_back(a);
			}
		}
	}
	for(int i = 1; i < r; i++) {
		for(int j = 0; j < c; j++) {
			if(j == 0) {
				ps[i].push_back(v[i][j] + max(ps[i - 1][j], ps[i - 1][j + 1]));
			} else if(j == c - 1) {
				ps[i].push_back(v[i][j] + max(ps[i - 1][j], ps[i - 1][j - 1]));
			} else {
				ps[i].push_back(v[i][j] + max(ps[i - 1][j], max(ps[i - 1][j - 1], ps[i - 1][j + 1] )));
			}
		}
	}
	int max = 0; 
	for(int i = 0; i < c; i++) {
		if(ps[r - 1][i] > max) {
			max = ps[r - 1][i];
		}
	}
	cout << max;
	
}
