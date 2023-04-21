/*
 * input n, counter{}
 * for loop that goes through the string
 * if i-1 is different count++
 * */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, counter{};
	string s;
	cin >> n >> s;
	for(int i = 1; i < n; i++) {
		if(s[i] == s[i - 1]) {
			counter++;
		}
	}
	cout << counter;
}
