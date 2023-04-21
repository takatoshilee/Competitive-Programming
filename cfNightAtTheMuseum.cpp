/* counter{}
 * input string
 * linear for loop through string
 * find ASCII of current value and next value, compare | current - next | with 26 - |current - next|, to see which rotation to go, add that to counter
 * */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int counter{};
	string s;
	cin >> s;
	s.insert(0, "a");
	for(int i = 1; i < s.length(); i++) {
		if(abs((int)s[i] - (int)s[i - 1]) <= 26 - abs((int)s[i] - (int)s[i - 1])) {
			counter += abs((int)s[i] - (int)s[i - 1]);
		} else {
			counter += 26 - abs((int)s[i] - (int)s[i - 1]);
		}
	}
	cout << counter;
}
