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
    int a{};
	int b{};
    cin >> a >> b;
	cout << gcd(a,b);

}
