/*
 * input n, turn = 1; test 0 after
 * input deque
 * counter s and d
 * while(!empty), check the front and back, and if turn is odd,  add max to s, if even add max to d
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, sCounter{}, dCounter{}, turn = 1;
	deque<int> d;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int input;
		cin >> input;
		d.push_back(input);
		//cout << i << " ";
	}

	while(!d.empty()) {
		if(d.front() == d.back()) {
		    if(turn % 2 == 0) {
				dCounter += d.front();
			} else {
				sCounter += d.front();
			}
			d.pop_back();
		} else if(d.front() > d.back()) {
			if(turn % 2 == 0) {
				dCounter += d.front();
			} else {
				sCounter += d.front();
			}
			d.pop_front();
		} else if(d.back() > d.front()) {
			if(turn % 2 == 0) {
				dCounter += d.back();
			} else {
				sCounter += d.back();
			}
			d.pop_back();
		}
		turn++;
	}
	cout << sCounter << " " << dCounter;
}
