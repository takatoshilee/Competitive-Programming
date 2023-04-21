#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;

//#define dbg(v) \
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
	int n, m, e = 0;
	vector<int> v;
bool can(int num) {
	int current{}, count{};
	for(int i = 0; i < v.size(); i++) {
		while(current + v[i] <= num){
			current += v[i];
			i++;
		}
		count++;
	}
	if(count <= m) {
		return true;
	} else {
		return false;
	}
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	//variables

	//input
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		int input; cin >> input;
		v.push_back(input);
		e += input;
	}
	int start = 0; // TEST
	while(start <= e) {
		int mid = start + (e - start) / 2;
		if(can(mid)) {
			e = mid - 1;
		} else {
			start = mid + 1;
		}
	}
	cout << e << " " << start;
}

//Approach:
//can method return bool
	//int current = 0, , count{};
	//for(int i = 0; i < m; i++) {
		//while (current + next element <= m) {
			//add next num to current
			//i++
		//}
	//count++;
	//}
	//if(count == m)
	//true else false
	
//input n, m, sum{};
//for loop n times, input num into vector, add to sum
//binary search
	//s =  0 1
	//e = sum
	//while (s <= e) {
		//mid = s + (e - s) / 2;
		//if can
			//change change endpoint
		//else
			//change start point
	//}
	
	
