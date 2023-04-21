#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;
	
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

int n;
vector<int> ft1;
vector<int> ft2; //from the back

int query1(int x) {
	int res = 0;
	for(;x;x-=(x&-x)) res += ft1[x];
	return res;
}

void update1(int x, int y) {
	for(;x<=n;x+=(x&-x)) ft1[x] += y;
}

int query2(int x) {
	int res = 0;
	for(;x;x-=(x&-x)) res += ft2[x];
	return res;
}

void update2(int x, int y) {
	for(;x<=n;x+=(x&-x)) ft2[x] += y;
}

int main() {				
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);

	cin >> n;
	int largest = -1;
	vector<int> v;
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.pb(a);
		largest = max(a, largest);
	}
	ft1.assign(largest + 1, 0);
	ft2.assign(largest + 1, 0);
	int sum{};
	//cout << "d";
	
	for(int i = 1; i <= n; i++) {
		sum += query1(v[i - 1]) ;// * query2(largest - v[i - 1])
		update1(v[i - 1], 1);
		//update2(largest - v[i - 1], 1);
	}
	cout << sum;
}
