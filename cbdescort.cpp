#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;

//#define dbg(v) \
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	vector<int> v;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int input;
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end(), greater<int> ());
	for(int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
}
