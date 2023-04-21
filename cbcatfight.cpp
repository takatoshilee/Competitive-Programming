#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;
using ll = long long;
//#define dbg(v)
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	
	int n, p, max{};
	vector<int> v;
	cin >> n >> p;
	for(int i = 0; i < n; i++) {
		int a; cin >> a;
		v.push_back(a);
	}
	
	for(int i = 0; i < n; i++) {
		int tempP = p, count{};
		int a = i;
		while(tempP >= v[a]) {
			tempP -= v[a];
			count++;
			if(a == n - 1) {
				break;
			}
			a++;
		}
		if(count > max) {
			max = count;
		}
	}
	cout << max;
	
}

//Approach:
//input int n and p and max{}
//for loop to input the array to vector
//for loop, that goes through vector
	//while temp p > next num
	//p - v[i]
	//if count > max max = count
