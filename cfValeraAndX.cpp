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
	//checked answer and found another appraoch:
	//int n;
	//cin >> n;
	//map<char, int> m;
	//for(int i = 0; i < n / 2; i++) {
		//string str; cin >> str;
		//m[str[i]]++;
		//m[str[i - i - 1]]++;
	//}
	//string input; cin >> input;
	
	int n; 
	cin >> n;
	set<char> s1;
	set<char> s2;
	for(int i = 0; i < n; i++) {
		string str;
		cin >> str;
		s1.insert(str[i]);
		//cout << str[i] << " " << str[n - 1 - i] << "\n";
		s1.insert(str[n - 1 - i]);
		for(int j = 0; j < n; j++) {
			if(j != i && j != n - 1 - i) {
				s2.insert(str[j]);
				//cout << "J " << str[j] << "\n";
			}
		}
	}
	
	if(s1.size() == 1 && s2.size() == 1 && *s1.begin() != *s2.begin()) {
		cout << "YES";
	} else {
		cout << "NO";
	}
}
//Approach:
//input n;
//map <char, int>
//for loop 1 to n / 2 + 1, input string, 
	 //str[i]++ on map
	 //str[n - i]++ on map
	 //if(i == n - 1) {
		 //str[i]--;
	 //}

//for loop from n / 2 + 2, to n i--
	//input string
	//str[n / 2 - 1]++ on map
	//str[n - i] on map CHECK!
//check if first string's pos 0 is n * 2 - 1
