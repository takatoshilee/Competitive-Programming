#include "bits/stdc++.h"
#include "debugging.h"
using namespace std;

#define dbg(v) \
	cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
struct cmp {
		bool operator () (pair<int, int> x, pair<int, int> y) {
			if(x.second == y.second) {
				return(x.first <= y.first);
			}
			return (x.second <= y.second);
		}
	};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	int n;  
	cin >> n;
	vector<pair<int, vector<int> > > v;
	for(int i = 0; i < n; i ++) {
		int input;
		cin >> input;
		v.push_back({input});
		//now we find the smallest prime to divide the number and asisgn it to the second part of the pair
		for(int j = 2; j <= input; j++) {
			if(input % j == 0) {
				v[i].second = j;
				break;
			}
		}
	}
	sort(v.begin(), v.end(), cmp());
	for(int i = 0; i < v.size(); i++) {
		cout << v[i].first << "\n";
	}
}
//Approach:
//int n;
//input n times add to vector of pair<int, int> 
//for the second int in the pair, do a for loop to find the smallest prime factorization
//sort the vector based on the second.pair, then print the first values in the pari
