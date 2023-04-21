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
	int n;
	cin >> n;
	vector<vector<int> > v;
	vector<int> v;
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.pb(a);
	}
	for(int i = 1; i )
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;

#define mod 1000000007
int main () {
    int n; cin>>n;
    unordered_map<ll, ll> freq;
    vi arr;
    for (int i=0;i<n;i++) {
        ll x; cin>>x;
        if (freq[x] == 0) arr.push_back(x);
        freq[x]++;
    }
    sort(arr.begin(), arr.end());
    vi dp; dp.assign(arr.size(), 0);
    dp[0] = freq[arr[0]]*arr[0];
    if (arr[1] - arr[0] == 1) {
        dp[1] = max(dp[0], freq[arr[1]]*arr[1]);
    } else {
        dp[1] = dp[0] + freq[arr[1]]*arr[1];
    }
    for (int i=2;i<arr.size();i++) {
        if (arr[i]==arr[i-1]+1) {
            dp[i] = max(dp[i-1], dp[i-2]+(freq[arr[i]]*arr[i]));
        } else {
            dp[i] = (dp[i-1]+freq[arr[i]]*arr[i]);
        }
    }

    cout << dp[dp.size()-1]<<endl;
}
