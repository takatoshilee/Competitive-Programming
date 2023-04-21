#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, count{}, minNotes = 1;
	cin >> n;
	//starts subtracting the number given by 1 until it finds a number that is the power of 2
	for(long long i = n; i >= 1; i--) {
		//if i is a power of 2
		if((i & (i-1)) == 0) {
			minNotes = i;
			break;
		}
		
	}
	for(long long i = minNotes; i >= 1; i /= 2) {
		if(n >= i) {
			n -= i;
			count++;
		}
	}
	cout << count;
}



