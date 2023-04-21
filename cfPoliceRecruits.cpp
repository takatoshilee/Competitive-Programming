/*
 * input n, crimeCounter{}, officerCounter{}
 * linear for loop, ifs
 *  c1: officer
	c3: crime with officer
	c2: crime without officer
 * */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, crimeCounter{}, officerCounter{};
	cin >> n;
	for(int i = 0; i < n; i++) {
		int input;
		cin >> input;
		if(input > 0) {
			officerCounter += input;
		} else if(input == -1 && officerCounter == 0) {
			crimeCounter++;
		} else {
			officerCounter--;
		}
	}
	cout << crimeCounter;
}
