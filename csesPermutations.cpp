#include <bits/stdc++.h> 

using namespace std;

using ll = long long;

int main() {
	ll n;
	cin >> n;
	
	count = 1;
	
	vector<ll> v;
	if(n == 1) {
		cout << "1\n";
	} else if(n < 4) {
		cout << "NO SOLUTION";
	} else {
		for(int i = 0; i < (n + 1) / 2) + 1; i = i + 2) {
			v[i] = count;
			count++;
		}
		for(int i = 1; i < n / 2; i = i + 2) {
				cout << i << " ";
		}
	}
}
