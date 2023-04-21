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
	//int n;
	//cin >> n;
	//vt<int> v;
	//for(int i = 0; i < n; i++) {
		//int a;
		//cin >> a;
		//v.pb(a);
	//}
	//int l{}, r{}, sum = v[0], ans = sum;
	//while(r < n - 1) {
		//r++;
		//sum += v[r];
		//while(sum < 0) {
			//l++;
			//sum -= v[l];
		//}
		//ans = min(ans, sum);
	//}
	//cout << ans;
	int n;
	cin >> n;
	stack<int> s;
	int min;
	int sum{};
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		s.push(a);
		sum += a;
		if(i == 0) {
			min = a;
		} else {
			if(sum < min) {
				sum = min;
			}
		}
	}
	
	sum = 0;
	for(int i = 0; i < n; i++) {
		sum += s.top();
		s.pop();
		if(sum < min) {
			min = sum;
		}
	}
	cout << min;
}
