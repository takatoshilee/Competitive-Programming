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
	int n;
	cin >> n;
	deque<int> dq;
	stack<int> s;
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if(a == 1) {
			int k;
			cin >> k;
			dq.push_front(k);
		} else if(a == 2) {
			int k;
			cin >> k;
			dq.push_back(k);
		} else if(a == 3) {
			if(!dq.empty()) dq.pop_front();
		} else if(a == 4) {
			if(!dq.empty()) dq.pop_back();
		} else if(a == 5) {
			int k;
			cin >> k;
			int j = 0;
			bool found = false;
			while(j < dq.size()) {
				if(dq[j] == k) {
					found = true;
					break;
				}
				j++;
			}
			if(found) cout << j + 1 << endl;
			else cout << 0 << endl;
		} else if(a == 6) {
			int k;
			cin >> k;
			int j = dq.size() - 1;
			bool found = false;
			while(j >= 0) {
				if(dq[j] == k) {
					found = true;
					break;
				}
				j--;
			}
			if(found) cout << dq.size() - j << endl;
			else cout << 0 << endl;
		}
		//cout << dq << "\n";
	}
	return 0;
}
