#include <bits/stdc++.h>

using namespace std;

int main() {
	string str;
	cin >> str;
	int totalCount = 1;
	int count = 1;
	for(int i = 0; i < str.size() - 1; i++) {
		if(str[i] == str[i + 1]) {
			count++;
		} else if(str[i] != str[i + 1]) {
			count = 1;
		}
		if(count > totalCount) {
			totalCount = count;
		}
	}
	cout << totalCount;
	
}
