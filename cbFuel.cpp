#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;

//#define dbg(v) \
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	int n, l, t, answer{};
	cin >> n >> l >> t;
	vector<int> v;
	for(int i = 0; i < n; i++) {
		int input;
		cin >> input;
		v.push_back(input);
	}
	int current{};
	while (current < v.size() -1) {
		int upperIndex = current;
		if (current == 0) {
			upperIndex = upper_bound(v.begin(), v.end(), t) - v.begin() - 1;
		} else if (v[current] == v.size() -1 || v[current] + t < l){
			cout << -1;
			exit(0);
		} else {
			upperIndex = upper_bound(v.begin(), v.end(), v[current] + t) - v.begin() - 1; // what if the first current + 3 does work
		}
		
		if(v[upperIndex] == current) {
			cout << -1;
			exit(0);
		} else {
			answer++;
			current = upperIndex;
		}
	}
	cout << answer;
}

//Approach:
//input n, l, t as ints, current{}
//n times, input array into vector
//for loop, until it reaches the end, 
