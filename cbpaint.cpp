/* input n
 * for loop of n, add that to sum{}
 * 0 1 2 3 5 5 7
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, sum{};
	cin >> n;
	vector < int > addedCost;
	
	for(int i = 0; i < n; i++) {
		int input;
		cin >> input;
		sum += input;
	}
	
	for(int i = 0; i < n; i++) {
		int input;
		cin >> input;
		addedCost.push_back(input);
	}
	sort(addedCost.begin(), addedCost.end(), greater<int>());
	for(int i = 0; i < n; i++) {
		sum += addedCost[i] * i;
	}
	cout << sum;
}
