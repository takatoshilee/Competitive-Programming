#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;
using ll = long long;
//#define dbg(v) \
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		ll input, max{}; //could change input to int
		cin >> input;
		for(int k = 1; k <= input; k++) {
			ll sum{};
			for(int j = 1; j <= sqrt(input); j++) {
				if(k % j == 0) {
					sum += j + k / j;
				}
			}
			if(sum > max) {
				max = sum;
			}
		}
		cout << max << "\n";
	}
}

//Appraoch:
//sum{}
//from i = 1 to i = sqrt(input)
//if divisible, sum += i and 
//if sum > max, max = sum
