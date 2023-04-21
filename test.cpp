#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a, b;
	cin >> a >> b;
	while (a != b) {
			if(a > b) {
				a -= b;
			} else {
				b -= a;
			}
		}
		cout << a;
}
