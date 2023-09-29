#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> v;
	
	for(int i = 0; i < n; i++) {
		int input;
		cin >> input;
		v.push_back(input);/''
	}
	sort(v.begin(), v.end());
	for(int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
	return 0;
}
