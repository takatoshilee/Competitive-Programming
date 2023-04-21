Also, here's my code for the ballot: https://codebreaker.xyz/problem/ballot. When i tested it with the sample test case, it seems to work, but i get 0 for all the subtasks and i dont know why its not passing:


#include <bits/stdc++.h>
//#include "debugging.h"
using namespace std;

//#define dbg(v)
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int main() {
	//ios::sync_with_stdio(false);
	//cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout)
	int n, c;
	cin >> n >> c;
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	
	for(int i = 0; i < n; i++) {
		int a; cin >> a;
		v1.push_back(a);
	}
	
	for(int i = 0; i < c; i++) {
		int a; cin >> a;
		v2.push_back(a);
	}
	
	sort(v1.begin(), v1.end()); 

	
	
	for(int i = 0; i < c; i++) {
		int count{};
		int index = lower_bound(v1.begin(), v1.end(), v2[i]) - v1.begin();
		//cout << "INDEX " << index << "\n";
		if(v1[index] == v2[i] || v1[index] - v2[i] < v2[i] - v1[index - 1]) {
			for(int j = 0; j < v3.size(); j++) {
				if(v2[i] <= v3[j]) {
					count++;
				}
				//cout << "COUT HAPPENED AT " << i;
			}
			cout << index + count<< "\n";
			v1.erase(v1.begin() + index);
			v3.push_back(v1[index]);
			//cout << "h1\n";
		} else {// this happens when: v1[index] - v2[i] >= v2[i] - v1[index - 1]
			for(int j = 0; j < v3.size(); j++) {
				if(v2[i] <= v3[j]) {
					count++;
				}
			}
			cout << index - 2 + count << "\n";
			v1.erase(v1.begin() + index - 1);
			v3.push_back(v1[index - 1]);
		}
		//for(auto j : v1) {
			//cout << j << " ";
		//} cout << "\n";
	}
}
//Approach:
//input int n and c;
//init vector1 and vector 2;
//input values into vector using for loop  of n size; for vector 1 and 2
//sort vector


//check:
//for loop through vector 2
	//find index lower.bound
	//if num == v[lower.bound]
		//erase from vector and cout
	//else if v[lower.bound] - num == v[lower.bound - 1]
		//then pick smaller v[lower.bound - 1] to erase from vector and cout
	//else
		//if v[lower.bound] - num > num - v(lower.bound - 1);
		//else 
