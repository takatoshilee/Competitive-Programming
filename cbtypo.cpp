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
	string s1;
	string s2;
	cin >> s1 >> s2;
	if(s1 == s2) {
		cout << "Yes";
		exit(0);
	} else {
		for(int i = 0; i < s1.length(); i++) {// what happens if i put s.size
			if(s1[i] != s2[i]) {
				if(s1[i] == s2[i + 1] && s1[i + 1] == s2[i]) {
					cout << "Yes";
					exit(0);
				} else {
					cout << "No";
					exit(0);
				}
			}
		}
	}
}
//Approach:
//if same
//else
//put into vector, 
//if:
//1 2 
//2 1 
//then can
