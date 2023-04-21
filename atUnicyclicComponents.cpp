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

int findSet(int x) {return (parent[x] == x) ? x : findSet(parent[x]);}

void merge(int x, int y) {
	int a = findSet(x), b = findSet(y);
	if(a != b) {
		parent[a] = b; 
		sz[b] += sz[a];
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
	sz.assign(n, 1);
	for(int i = 0; i < n; i++) {parent [i] += i;}
	for(int i =0; i < m; i++) {int a, b; cin >> a >> b; merge(a, b); }
	for(int i = 0; i < sz.size(); i++) {
		//if(sz[findSet(i)] != sz[findSet(i + 1)]) {
			//cout << "No";
			//return 0;
		//}
		cout << sz[findSet(i)] << " ";
	}
	cout << "Yes";
	//for(auto i : parent) {
		//cout << i << " ";
	//} cout << endl;
	//for(auto i : sz) {
		//cout << i << " ";
	//} cout << endl;
	//int n, m;
	//cin >> n >> m;
	//vector<int> v(n, 0);
	//for(int i = 0; i < m; i++) {
		//int a, b;
		//cin >> a >> b;
		//v[a]++;
		//v[b]++;
	//}
	//for(auto i : v) {
		//cout << i << " ";
	//}
	//for(int i = 0; i < n - 1; i++) {
		//if(v[i] != v[i + 1]) {
			//cout << "No";
			//return 0;
		//}
	//}
	//cout << "Yes";
}
