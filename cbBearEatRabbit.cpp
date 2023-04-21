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
    int n;
    cin >> n;
    vector<int> v;
    vector<int> dp;
    for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	dp.push_back(v[0]);
	dp.push_back(max(v[0], v[1]));
	for(int i = 2; i < n; i++) {
		if(dp[i - 2] > 0) {
			dp.push_back(max(dp[i - 1], v[i] + dp[i - 2]));
		} else {
			dp.push_back(max(dp[i - 1], v[i]));
		}
	}
	//for(auto i : dp) {
		//cout << i << " ";
	//} cout << endl;
	if (dp[n - 1] < 0) {
		cout << 0;
	} else {
		cout << dp[n - 1];
	}
	
}
