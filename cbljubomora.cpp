#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;

//#define dbg(v) \
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
	int n, m, end{};
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
	if(count == num) {
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
		end += input;
	}
	int start = 0; // TEST
	while(start <= end) {
		int mid = start + (end - start) / 2;
		if(can(mid)) {
			end = mid - 1;
		} else {
			start = mid + 1;
		}
	}
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
	
	
