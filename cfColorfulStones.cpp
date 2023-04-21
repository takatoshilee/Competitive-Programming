//Approach:
//input strings, init counter = 1, sPosition{}
//linear for loop through t, if t[i] = s[sPosition] counter++
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, t;
	int counter = 1, sPosition{};
	cin >> s >> t;
	for(int i = 0; i < t.size(); i++) {
		if(t[i] == s[sPosition]) {
			sPosition++;
			counter++;
		}
	}
	cout << counter;
}
