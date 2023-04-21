#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main() {
	int n;
	int h;
	int width{};
	
	cin >> n >> h;
	for(int i = 0; i < n; i++) {
		int input;
		cin >> input;
		width++;
		if(input > h) {
			width++;
		}
	}
	cout << width;
}
