#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;

//#define dbg(v) \
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
	
#define ll long long
#define ld long double
#define ar arrayOHH

#define vt vector
#define pb push_back


int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	
	int n;
	cin >> n; 
	vector<int> v;
	int counter;
	
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		v.push_back(a);
		sort(v.begin(), v.end());
		
		counter = v[0];
		int answer = 1;
		for(int j = 0; j < v.size(); j++) {
			if(v[j] >= counter + 2) {
				counter += 2;
				answer++;
			}
		}
		cout << answer << " ";
	}
	
	
}


//Approach:
//vector of size till the amount, sort, 
