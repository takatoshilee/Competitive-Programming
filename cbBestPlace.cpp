#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;
using ll = long long;
//#define dbg(v) \
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	int n; 
	cin >> n;
	vector<int> v;
	vector<int> v1;
	for(int i = 0; i < n; i++) {
		int a , b;
		cin >> a >> b;
		v.push_back(a);
		v1.push_back(b);
	}
	sort(v.begin(), v.end());
	sort(v1.begin(), v1.end());
	//for(auto i : v) {
		//cout << i << " ";
	//}
	//cout << "\n";
	//for(auto i : v1) {
		//cout << i << " ";
	//} 
	cout << v[n / 2] << " " << v1[n / 2];
}
