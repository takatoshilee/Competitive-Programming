#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
		return a;
	} else {
		return gcd(b, a % b);
	}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n{}; // n is lunchboxes
	int m{}; // m is number of schools
    cin >> n >> m;
    
    vector<int> k;
	for(int i = 0; i < m; i++) {
		k.push_back(cin);
	}
}
