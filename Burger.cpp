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
	vector<int> v; //initial ingredients
	vector<int> v1; //recipe 1
	vector<int> v2; //recipe 2
	int n, maxR1{}, maxR2{};
	cin >> n;
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v1.push_back(a);
		if(i == 0) {
			maxR1 = v[i] / a;
		}
		maxR1 = min(maxR1, v[i] / a);
	}
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v2.push_back(a);
		if(i == 0) {
			maxR2 = v[i] / a;
		}
		maxR2 = min(maxR2, v[i] / a);
	}
	
	
	bool same = true;
	for(int i = 0; i < n; i++) {
		if(v1[i] != v2[i]) {
			same = false;
			break;
		}
	}
	
	int count = 1;
	if(same) {
		cout << maxR1;
		exit(0);
	} else {
		while(maxR1 == maxR2 && count <= v.size()) {
			maxR1 = min(maxR1, v[count] / v1[count]);
			maxR2 = min(maxR2, v[count] / v1[count]);
			count++;
		} 
		
		if(maxR1 > maxR2) {
			for(int i = 0; i < n; i++) {
				v[i] -= v1[i] * maxR1;
			}
			for(int i = 0; i < n; i++) {
				if(i == 0) {
					maxR2 = v[i] / v2[i];
				}
			maxR2 = min(maxR2, v[i] / v2[i]);
			}
		} else {
			for(int i = 0; i < n; i++) {
				v[i] -= v2[i] * maxR2;
			}
			for(int i = 0; i < n; i++) {
				if(i == 0) {
					maxR1 = v[i] / v1[i];
				}
			maxR1 = min(maxR1, v[i] / v1[i]);
			}
		}
	}
	
	cout << maxR1 + maxR2;
}
