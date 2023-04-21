#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n; i++) {
		int input;
		cin >> input;
		arr[input - 1] = i + 1;
	}
	for(int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
