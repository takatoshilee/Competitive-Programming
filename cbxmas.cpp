#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int array[n];
	for(int i = 0; i < n; i++) {
		int input;
		cin >> input;
		array[input - 1] = i + 1;
	}
	for(int i = 0; i < n; i++) {
		cout << array[i] << "\n";
	}
}
