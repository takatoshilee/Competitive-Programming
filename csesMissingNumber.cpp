#include <bits/stdc++.h>

using namespace std;

int main() {
	long long n;
	vector<long long> num;
	
	cin >> n;
	
	long long x;
	
	
	for (long long i = 0; i < n - 1; i++) {
		cin >> x;
		num.push_back(x);
	}
	sort(num.begin(), num.end());
	//test sort
	/*
	for(int i = 0; i < num.size(); i++) {
		cout << num[i] << " ";
	}
	*/
	long long count = 1;
	for(int i = 0; i <= num.size(); i++) {
		//cout << count << " ";
		//cout << num[i] << "\n";
		
		if (count != num[i]) {
			cout << count;
			break;
		} 
		count++;
	}
}
