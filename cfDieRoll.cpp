//Approach:
//input y, w; init num, deno
//6 - get the highest number - 1
//output the prev line / 6
	//if prev line == 0, output num / deno which is 1
	//if perv line == even, while (num and deno is even, keep dividing them by 2)
	//if deno mod num == 0 //divisible by num, while (deno mod num == 0) for(int i = 1; i < num; i++) , if num and deno is divisible by i, restate num and deno
	//else output num / deno
	
	 //0 
	 //1 5
	 //2 4
	 //3 
#include <bits/stdc++.h>
using namespace std;

int main() {
	int y, w, highestNum;
	cin >> y >> w;
	if(y >= w) {
		highestNum = y;
	} else {
		highestNum = w;
	}
	int num = 7 - highestNum, deno = 6;
	while ((num % 2 == 0 && deno % 2 == 0) || (deno % num == 0 && num != 1)) {
		if(num == deno) {
			break;
		}
		while(num % 2 == 0 && deno % 2 == 0) {
			num /= 2;
			deno /= 2;
		}
		while (deno % num == 0 && num != 1) {
			for(int i = 2; i <= num; i++) {
				if (num % i == 0 && deno % i == 0) {
					num /= i;
					deno /= i;
				}
			}
		}
	}
	if(num == deno) {
		cout << "1/1";
	} else {
		cout << num << "/" << deno;
	}
}
