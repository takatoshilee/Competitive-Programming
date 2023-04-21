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
	int n, k;
	cin >> n >> k;
	vector<int> v1;
	vector<int> v2;
	int sum{}, current = -1;
	for(int i = 0; i < n; i++) {
		int input;
		cin >> input;
		v1.push_back(input);
	}
	for(int i = 0; i < n; i++) {
		int input;
		cin >> input;
		v2.push_back(input);
	}
	for(int i = 0; i < n; i++) {
		if(current == -1) {
			sum += max(v1[i], v2[i]);
			if(v1[i] > v2[i]) {
				current = 0;
			} else {
				current = 1;
			}
		}
			sum += max(v1[i], v2[i]);
			if(v1[i] == v2[i]) {
				current = -1; 
			} else if(v1[i] > v2[i]) {
				current = 0;
			} else {
				current = 1;
			}
		} else {
			if(v1[i])
		}
	}
	cout << sum;
}


#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<ll> vi;

int main () {
    ll n,s; cin>>n>>s;
    vi A,B;
    for (int i=0;i<n;i++) {
        ll a; cin>>a;
        A.push_back(a);
    }
    for (int i=0;i<n;i++) {
        ll a; cin>>a;
        B.push_back(a);
    }

    vi dp1,dp2;
    dp1.assign(n, 0); dp1[0] = A[0];
    dp2.assign(n, 0); dp2[0] = B[0];

    for (int i=1;i<n;i++) {
        dp1[i] = A[i]+max(dp1[i-1], dp2[i-1]-s);
        dp2[i] = B[i]+max(dp2[i-1], dp1[i-1]-s);
    };
    cout<<max(dp1[n-1], dp2[n-1]) << endl;
}
