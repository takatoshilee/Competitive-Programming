/*input string
check how many letters the string has
check how many uppercase/lower case it has isupper()
use upper() or lower function
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int lowerCount{};
	cin >> s;
	for(int i = 0; i < s.length(); i++) {
		if(islower(s[i])) {
			lowerCount++;
		}
	}
	for(int i = 0; i < s.length(); i++) {
	  if(s.length() - lowerCount > lowerCount) {
		s[i] = toupper(s[i]);
	} else 
		s[i] = tolower(s[i]);
	}
	cout << s;
	
}
