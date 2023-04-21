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

struct cmpLP {
	bool operator() (pair<int, int> x, pair<int, int> y) {
		return (x.first <= y.first);
	}
};

struct cmpRP {
	bool operator() (pair<int, int> x, pair<int, int> y) {
		return (x.second <= y.second);
	}
};


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll n, countLP = 1, countRP = 1;
	cin >> n;
	vector<pair<int, int> > v; 
	for(ll i = 0; i < n; i++) {
		ll a, b;
		cin >> a >> b;
		v.push_back({a, b});
	}
	sort(v.begin(), v.end(), cmpLP());
	for(int i = n - 2; i >= 0; i--) {
		if(v[n - 1].second < v[i].second)
		countLP++;
	}
	
	sort(v.begin(), v.end(), cmpRP());
	
	for(int i = n - 2; i >= 0; i--) {
		if(v[n - 1].first < v[i].first)
		countRP++;
	}
	//first attempt
	//for(ll i = 0; i < n; i++) {
		//bool useful = true;
		//for(ll j = 0; j < n; j++) {
			//if(v[i].first <= v[j].first && v[i].second <= v[j].second && i != j) {
				//useful = false;
			//}
		//}
		//if(useful == true) {
			//count++;
		//}
	//}
	
	//print vector
	//for(int i = 0; i < n; i++) {
		//cout << v[i].first << " " << v[i].second << "\n";
	//}
	
	cout << min(countLP, countRP);
	
}


//Approach:
//input int n;
//n times for loop, into vector of pair
//n times for loop, brute force against all other pairs

//n + 2n + 1
