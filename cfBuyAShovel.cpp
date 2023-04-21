//input k, r, counter{}, temp int sum of k's
//keep adding k to sum until sum % 10 == r
#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, r, counter{}, tempk;
	cin >> k >> r;
	tempk = k;
	while(true) {
		counter++;
		tempk = tempk % 10;
		//cout << tempk << " ";
		if(tempk == r || tempk == 0) {
			cout << counter;
			break;
		}
		tempk += k;
	}
}
