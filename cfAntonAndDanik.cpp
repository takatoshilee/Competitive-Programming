#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	string s;
	int anton{};
	int danik{};
	cin >> n >> s;
	for(int i = 0; i < n; i++) {
		if(s[i] == 'A') {
			anton++;
		} else {
			danik++;
		}
	}
	if(anton == danik) {
		cout << "Friendship";
	} else if(anton > danik) {
		cout << "Anton";
	} else {
		cout << "Danik";
	}
}
