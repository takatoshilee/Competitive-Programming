#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;

#define dbg(v) \
	cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	int n, count{};
	cin >> n;
	for(int i = 0; i < n; i++) {
		string str;
		cin >> str;
		if(str == "Tetrahedron") {
			count += 4;
		} else if(str == "Cube") {
			count += 6;
		} else if(str == "Octahedron") {
			count += 8;
		} else if(str == "Dodecahedron") {
			count += 12;
		} else if(str == "Icosahedron") {
			count += 20;
		}
	}
	cout << count;
}
