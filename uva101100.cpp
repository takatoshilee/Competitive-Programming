#include <bits/stdc++.h>

using namespace std;

int main() {
	int n = 3;
	bool bulb{};
	cout << bulb;
	while(n != 0) {
		cin >> n;
		for(int i = 1; i <= n; i++) {
			if(bulb && n % i == 0) {
				bulb = false;
				cout << i << " completedfalse\n";
			} else if(!bulb && n % i == 0) {
				bulb = true;
				cout << i << " completedtrue\n";
			}
			cout << "bulb at " << i << " = " << bulb;
		}
	}
	if(bulb) {
		cout << "yes";
	} else {
		cout << "no";
	}
}
