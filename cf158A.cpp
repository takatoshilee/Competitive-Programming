#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
		return a;
	} else {
		return gcd(b, a % b);
	}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	int n{}; // total num of participants
	int k{}; // the contestant's place that is the cutoff
	int score{};
	long counter{};
	vector<int> participants;
	
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
		cin >> score;
		participants.push_back(score);
	}
	for (int i = 0; i < n; i++) {
		if (participants[i] >= participants[k] && participants[k] > 0) {
			counter += 1;
		}
	}
    cout << counter;
    
}
