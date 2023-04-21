#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;
using ll = long long;
//#define dbg(v) \
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
struct cmp {
	bool operator () (pair<int, int> x, pair<int, int> y) {
		return (x.second <= y.second);
	}
};

bool can(int x, int y) {
	if(x >= y) {
		return true;
	} else {
		return false;
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	int n, count = 1, added = 1;
	//set<int> s;
	vector<pair<int, int> > v;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back({a, b});
	}
	sort(v.begin(), v.end(), cmp());
	for(int i = 0; i < n; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}
	for(int i = 1; i < n; i++) {
		if(!can(v[i].first, v[i - added].second)) {
			//cout << "happen at: " << count << " " << added << i;
			i++;
			added++;
			
		} else {
			count++;
		}
	}
	cout << count;
	//int j{};
	//for(int i = j; s[i] + count < 24; i++) {
		//count += s[i];
		//j++;
	//}
	//cout << j;
}
//Approach:
//input n,count{};
//set
//for(2 * n times) get the second number and add to set
//for(go through set, until the next number is over 24)
//count+= set[i]
//cout coutn
