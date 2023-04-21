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
	vector<int> v;
	vector<int> dp;
	vector<int> ps; // prefix of dp
	for(int i = 0; i < n; i++) {
		int input;
		cin >> input;
		v.push_back(input);
	}
	int sum{};
	for(int i = 0; i < n; i++) {
		int max = v[0];
		for(int j = 0; j < v.size() && j < k; j++) { //check second condition, correct
			if(v[j] > max) {
				max = v[j];
			}
		}
		sum += max;
		dp.push_back(max);
		ps.push_back(sum);
		//int lowerIndex = lower_bound(v.begin(), v.end(), max) - v.begin(); didint work cuz it had to be sorted
		
		int lowerIndex{};

		for(int j = 0; j < v.size(); j++) {
			if(v[j] == max) {
				lowerIndex = j;
				break;
			}
		}
		//cout << max << "\n";
		v.erase(v.begin() + lowerIndex);
		
		//for(auto j : v) {
			//cout << j << " ";
		//}cout << "\n";
	}
	int max{};
	for(int i = 0; i < n; i++) {
		if(dp[i] > max) {
			max = dp[i];
		}
	}

	//for(auto i : dp) {
		//cout << i << " ";
	//}
	//for(auto i : ps) {
		//cout << i << " ";
	//}
	cout << *max_element(ps.begin(), ps.end());
}
