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
	
	
	
	
	//freopen("piratein.txt", "r", stdin);
	//freopen("pirateout.txt", "w", stdout);
	
	//ignore the above part
	
	
	
	
	
	
	
	
	
	int n;
	
	cin >> n;
	
	vector<int> v; //initial heights
	
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.pb(a);
	}
	
	
	vector<int> v2(n);
	
	//find inital ugliness
	int ugly = 0; 
	for(int i = 1; i < n; i++) {
		ugly += abs(v[i] - v[i - 1]);
	}
	
	for(int i = 0; i < n; i++) {
		if(i == 0) {
			v2[i] = v[i + 1] - v[i];
		} else if(i == n - 1) {
			v2[i] = v[i] - v[i - 1];
		} else if((v[i - 1] > v[i] && v[i + 1] > v[i]) || (v[i - 1] < v[i] && v[i + 1] < v[i])) {
			v2[i] = min(abs(v[i] - v[i - 1]), abs(v[i] - v[i + 1]));
			v2[i] *= 2;
		}
	}
	
	int max = 0;
	int maxIndex = 0;
	for(int i = 0; i < n; i++) {
		if(v2[i] > max) {
			max = v2[i];
			maxIndex = i;
		}
	}
	ugly -= max;
	cout << ugly;
	
	// first, 2 - 1
	// second if between plus and minus, 0
	// third, if above both heights then pick min and add
	// remove last one
	
	
	
	
	
	
	
	
	
}
