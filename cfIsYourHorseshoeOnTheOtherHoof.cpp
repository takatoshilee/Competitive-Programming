//input vector, init counter = 1
//get the number of distince by:
//sort vector
//linear for loop, starting at 1, if prev is dif counter++


#include <bits/stdc++.h>
using namespace std;

int main() {
	vector < int > v;
	int counter = 3;
	for(int i = 0; i < 4; i++) {
		int input; 
		cin >> input;
		v.push_back(input);
	}
	sort(v.begin(), v.end());
	for(int i = 1; i < 4; i++) {
		if(v[i] != v[i - 1]) {
			counter--;
		}
	}
	cout << counter;
}
