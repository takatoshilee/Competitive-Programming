#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;

//#define dbg(v) \
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
int countDigit(int number) {
	int count{};
	while(number != 0) {
		number /= 10;
		count++;
	}
	return count;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	int n, k;
	cin >> n >> k;
	int count = n;
	for(int j = 0; j < n; j++) {
		string input; cin >> input;
		map<int, bool> m;
		for(int i = 0; i < input.length(); i++) {
			m[input[i] - '0']  = true;
		}

		for(int i = 0; i <= k; i++) {
			if(m[i] == false) {
				count--;
				break;
			}
		}
	}
	cout << count;
}
