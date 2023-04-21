/* input n, init counter
 * input array
 * double for loop to check
 * */
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, counter{};
	cin >> n;
	vector<int> v;
	for(int i = 0; i < 2 * n; i++) {
		int input;
		cin >> input;
		v.push_back(input);
	}
	//for(int i = 0; i < 2 *n; i++) {
		//cout << v[i];
	//}
	for(int i = 0; i < v.size(); i += 2) {
		for(int j = 1; j < v.size(); j += 2) {
			if(v[i] == v[j]) {
				counter++;
			}
		}
	}
	cout << counter;
}
//3
//1 2 2 4 3 4
