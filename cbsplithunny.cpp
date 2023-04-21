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
	int r, c;
	cin >> r >> c;
	vector<vector<char> > v;
	v.assign(r, vector<char>());
	int pool{};
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			char input;
			cin >> input;
			v[i].push_back(input);
			if(input == 'H') {
				if(i == 0 && j == 0) {
					pool++;
				} else if(i == 0 && v[i][j - 1] == '.') {
					pool++;
				} else if(j == 0 && v[i - 1][j] == '.') {
					pool++;
				} else if(v[i - 1][j] == '.' && v[i][j - 1] == '.'){
					pool++;
				}
			}
		}
	}
	cout << "Oh brother. There are " << pool << " pools of hunny.";
}
//Approach:
//idea is that the top left honey in the pool represents the pool, so the nubmer of honey without a honey on the box above and box left

//4 caess, 
 //index 0 0, add
 //left side, check if top is honey
 //top side, check if left is honey
 //remaining, check if top and left is honey
