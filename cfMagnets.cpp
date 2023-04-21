#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, count{};
	cin >> n;
	vector<int> v;
	for(int i = 0; i < n; i++) {
		int input;
		cin >> input;
		v.push_back(input);
	}
	for(int i = 0; i < v.size(); i++) {
		if(v[i] != v[i - 1]) {
			count++;
			//cout << v[i]<< " step " << i << "\n";
		}
	}
	cout << count;
}
