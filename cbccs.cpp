#include <bits/stdc++.h>
//#include "debugging.h"
using namespace std;

//#define dbg(v)
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
//Approach 1: ds doesnt work as its too large	
	//int n, q;
	//cin >> n >> q;
	//vector<bool> v(n, true); //vector size of n, and all vector is set to true
	//for(int i = 0; i < q; i++) {
		//string str;
		//cin >> str;
		//if(str == "TRANSMIT") {
			//int a, b;
			//cin >> a >> b;
			//while (v[a] == true && a <= b) {//CHECK HERE
				//a++;
			//} 
			//if (a == b + 1) {
				//cout << "YES\n";
			//} else {
				//cout << "NO\n";
			//}
		//} else if(str == "SLEEP") {
			//int a; cin >> a;
			//v[a] = false;
		//} else if (str == "WAKE") {
			//int a; cin >> a;
			//v[a] = true;
		//}
	//}
	//return 0;
	int n, q;
	cin >> n >> q;
	set<int> s;
	//vector<int> v; //vector size of n, and all vector is set to true
	for(int i = 0; i < q; i++) {
		string str;
		cin >> str;
		int a; cin >> a;
		int index = *s.lower_bound(a);
		if(str == "TRANSMIT") {
			int b;
			cin >> b;
			if (s.lower_bound(a) == s.end()) {
			    cout << "YES" << endl;
			} else if (index == a or index < b or *s.lower_bound(b) == b) {
			    cout << "NO" << endl;
			} else {
			    cout << "YES" << endl;
			    continue;
			}
		} else if(str == "SLEEP") {
			//s.push_back(a);
			s.insert(a);
		} else if (str == "WAKE") {
			s.erase(s.find(index));
		}
		//sort(v.begin(), v.end());
	}
	return 0;
}
//Approach:
//vector, 1 is asleep 
