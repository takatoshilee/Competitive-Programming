#include "bits/stdc++.h"
using namespace std;
using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	ll n, area = 0;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		if(a*b > area) {
			area = a * b;
		}
	}
	cout << area;
	
}

//Approach:
//int n;, max{}
//n times input
