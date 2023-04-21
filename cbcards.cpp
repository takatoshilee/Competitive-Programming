#include <bits/stdc++.h>
//#include "debugging.h"
using namespace std;

//#define dbg(v)
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	int m, k;
	cin >> m >> k;
	deque<int> d;
	for(int i = 0; i < m; i++) {
		d.push_back(i);
	}
	while(true) {
		char c;
		cin >> c;
		if(c == 'A'){
			d.push_back(d[0]);
			d.pop_front();
		} else if(c == 'B') {
			int input;
			input = d[0];
			d.pop_front();
			d.push_back(d[0]);
 {
			break;
		}
	}
	/*
	for(int i = 0; i < d.size(); i++) {
		cout << d[i] << " ";
	}*/
	for(int i = k - 1; i < k + 2; i++) {
		cout << d[i] << " ";
	}
		
}

//Approach:
//input m, k;
//init deque
//reasign all the values in deque from index 0 to m;
//while 
	//if a, pop, push etc
	//if b pop puch etc
	//if ., break
//two variables which is k - 1, and k + 1, keep popping until that variable is reached
