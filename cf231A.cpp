#include <iostream>

using namespace std;

int main() {
	int n{};
	cin >> n;
	int count = 0;
	
	int petya{};
	int vasya{};
	int tonya{};
	
	for (int i = 0; i < n; i++) {
		cin >> petya >> vasya >> tonya;
		if (petya + vasya + tonya >= 2) {
			count = ++count;
		}
	}
	cout << count;
}
