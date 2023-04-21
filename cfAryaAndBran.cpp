#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, input, total{};
	cin >> n >> k;
	vector<int> v;
	for(int i = 0; i < n; i++) {
		cin >> input;
		v.push_back(input);
		if(input > 8) {
			input = 8;
		}
		total += input;
	}
	if(total >= k) {
		cout << n;
	} else
		cout << -1;
}
