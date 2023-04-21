#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("paint.in", "r", stdin);
	// the following line creates/overwrites the output file
	freopen("paint.out", "w", stdout);
    int array[4], min, max;
    
    for(int i = 0; i < 4; i++) {
		cin >> array[i];
	}
	
	min = array[0];
	max = array [0];
	
	for(int i = 0; i < 4; i++) {
		if(array[i] < min) {
			min = array[i];
		}
		if(array[i] > max) {
			max = array[i];
		}
	}
	if((array[0] < array[2] && array[0] < array[3]) && (array[1] < array[2] && array[1] < array[3])) {
			cout << array[1] - array[0] + array[3] - array[2];
	} else {
		//cout << max << " " << min;
		cout << max - min;
}
}
