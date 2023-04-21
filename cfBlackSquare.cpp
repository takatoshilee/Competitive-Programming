/*
 * int counter{}
 * array[4], input array
 * string s, linear for loop, array[i-1], add num to counter
 * */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int counter{}, arr[4];
	string s;
	for(int i = 0; i < 4; i++) {
		int input;
		cin >> input;
		arr[i] = input;
	}
	cin >> s;
	for(int i = 0; i < s.length(); i++) {
		counter += arr[s[i] - '0' - 1];
	}
	cout << counter;
}
