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

int n, m;
vector<int> parent, sz;

int findSet(int x) {return (parent[x] == x) ? x : parent[x] = findSet(parent[x]); }

void merge(int x, int y) { // need check
	int a = findSet(x), b = findSet(y);
	if(a != b) {
		if(a > b) {
			parent[b] = a;
			sz[a] += sz[b];
		} else {
			parent[a] = b;
			sz[b] += sz[a];
		}
		n--;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	
	cin >> n >> m;
	parent.assign(n, 0);
	
	for(int i = 0; i < n; i++) {
		parent[i] += i;
	}
	
	
	
	for(int i = 0; i < n; i++) {
		int input;
		cin >> input;
		sz.pb(input);
	}
	for(int i = 0; i < m; i++) {
		for(auto j : parent) {
			cout << j << " ";
		}
		cout << endl;
		for(auto j : sz) {
			cout << j<< " ";
		}
		cout << endl;
		cout << endl;
		int first, second;
		cin >> first >> second;
		if(findSet(first - 1) == findSet(second - 1)) {
			cout << -1;
		} else {
			//cout << 'y';
			if(sz[findSet(first - 1)] > sz[findSet(second - 1)]) {
				cout << findSet(first - 1) + 1;
			} else {
				cout << findSet(second - 1) + 1;
			}
			merge(first - 1, second - 1);
		}
		cout << endl;
	}
}
