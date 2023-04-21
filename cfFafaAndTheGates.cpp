#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int x{};
    int y{};
    int n; //number of moves
    int count{}; //number of crossing the gates
    string input;
    
    cin >> n;
    cin >> input;
    for(int i = 0; i < n; i++) {
		if(input[i] == 'U') {
			y++;
		}
		if(input[i] == 'R') {
			x++;
		}
		if(i + 1 == n) {
			break;
		}
		if(input[i] == input[i + 1] && x == y) {
			count++;
		}
	}
	cout << count;
}
