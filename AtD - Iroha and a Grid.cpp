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
	int h, w, a, b;
	cin >> h >> w >> a >> b;
	vector<vector<int> > v;
	v[0][0] = 1; 
	v.assign(h, vector<int>(0));
	for(int i = 1; i < h; i++) {
		for(int j = 1; j < w; j++) {
			v[i][j] += v[i - 1][j - 1];
		}
	}
	//print2D(v);
}

//Approach:
//dp
//2d vector kinda like prefix sums
//push dp
//base case 0,0 is 1 since there is one way
//init all as 0, with cells a and b as -1, then push the left and top cell to the cell, if statement to see if prev is neg, then add none
