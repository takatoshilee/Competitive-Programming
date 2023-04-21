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
	string str;
	cin >> str;
	for(int i = 0; i < str.size(); i++) {
		//if(i != 0, if wub starting at i, and prev 3 is not wub, add space)
		if(str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B') {
			if(i != 0 && str[i - 1] != ' ') {
				str[i] = ' ';
				str.erase(i + 1, 2);
			} else {
				str.erase(i, 3);
			}
			i--;
		}
		//cout << str << "\n";
	}
	cout << str;
}
//Approach:
//input string
//for loop that goes through the string, 
	//if it is w and next ones are wub, then erase
	//if wub is not the first element and the three consecutive chars after "B" is not wub, add a space
//print

