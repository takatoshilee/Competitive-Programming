#include "bits/stdc++.h" 

using namespace std;


int main() {
	long long n;
	vector<long long> v;
	long long moves{};
	
	cin >> n;
	long long input;
	//input v
	for(long long i = 0; i < n; i++) {
		cin >> input;
		v.push_back(input);
	}
	//test vector is inputted properly
	/*for(int i = 0; i < n; i++) {
		cout << v[i];
	}*/
	
	for(long long i = 0; i < n - 1; i++) {
		while(v[i + 1] < v[i]) {
			moves++;
			v[i + 1] += 1;
		}
	}
	cout << moves;
}
