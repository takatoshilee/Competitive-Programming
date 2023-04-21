#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	stack<char> s;
	bool valid= true;
	for(int i = 0; i < n; i++) {
		char c;
		cin >> c;
		if(c == '(' || c == '{' || c == '[') {
			s.push(c);
		} else if((c == ')' && s.top() != '(') || (c == '}' && s.top() != '{') || (c == ']' && s.top() != '[')) {
			valid = false;
			//cout << i;
			break;
		} else {
			s.pop();
		}
	}
	if(valid == true && s.empty())
		cout << "Valid";
	else {
		cout << "Invalid";
	}
}
