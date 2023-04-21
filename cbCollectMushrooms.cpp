#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;

using ll = long long;
#define debug(v) \
	cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	ll a, b, c, d;
	cin >> a >> b >> c >> d;
	vector<pair<int, int>> v; //store mushroom location
	vector<vector<int> > v1; // sprinkler vector
	v1.assign(a, vector<int>());
	for(int i = 0; i < a; i++) {
		for(int j = 0; j < b; j++) {
			char input;
			cin >> input;
			if(input == 'M') {
				v.push_back({i, j});
				v1[i].push_back(0);
			} else if(input == 'S') {
				v1[i].push_back(1);
			} else if(input == '.') {
				v1[i].push_back(0);
			}
		}
	}
	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	
	
	vector<vector<int> > v2; // prefix array
	v2.assign(a, vector<int>());
	//populate prefix 2d array of 
	//for(int i = 0; i < a; i++) {
		//for(int j = 0; j < b; j++) {
			
		//}
	//}
	//populate the prefix 2d array
	for(int i = 0; i < a; i++) {
		for(int j = 0; j < b; j++) {
			if(i == 0 && j == 0) {
				v2[i].push_back(v1[i][j]);
			} else if(i == 0) {
				v2[i].push_back(v1[i][j] + v2[i][j-1]);
			} else if(j == 0) {
				v2[i].push_back(v1[i][j] + v2[i - 1][j]);
			} else {
				v2[i].push_back(v1[i][j] + v2[i - 1][j] + v2[i][j - 1] - v2[i - 1][j - 1]);
			}
		}
	}
	
	//input the car and add to the initial 2d vector and 2d prefix vector
	//for(int i = 0; i < a; i++) {
		//for(int j = 0; j < b; j++) {
			//char input;
			//cin >> input;
			//v1[i].push_back(input);
			//if(input == 'S') {
				//for(int ii = i - c; ii <= i + c; ii++) {
					//for(int jj = j - c; jj <= j + c; jj++) {
						 //if ii and jj is in range
						//if(ii >= 0 && jj >= 0 && ii < a && jj < b) {
							//v2[ii][jj]++;
						//}
					//}
				//}
			//}
		//}
	//}
	int ans{};
    for (int i=0;i<v2.size();i++) {
        ll cnt = 0;
        int x1 = max(v[i].second - c,0LL); int y1 = max(0LL,v[i].first - c);
        int x2 = min(v[i].second + c, a-1); int y2 = min(v[i].first + c,a-1);
        if (y1-1 < 0 and x1-1 < 0) {
            cnt = v1[y2][x2];
        } else if (y1 -1 < 0) {
            cnt = v1[y2][x2] - v1[y2][x1-1];
        } else if (x1 - 1 < 0) {
            cnt = v1[y2][x2] - v1[y1-1][x2];
        } else {
            cnt = v1[y2][x2] - v1[y1-1][x2] - v1[y2][x1-1] + v1[y1-1][x1-1];
        }
        if (cnt >= d) ans++;
    }
	
	
	
	
	
	//for(int i = 0; i < v.size(); i++) {
		//if(v2[v[i].first + c][v[i].second + c] - v2[v[i].first - c - 1][v[i].second + c] - v2[v[i].first + c][v[i].second - c - 1] + v2[v[i].first - c - 1][v[i].second - c - 1] >= d) {
			//count++;
		//}
	//}
	//print initial vector
	for(int i = 0; i < a; i++) {
		for(int j = 0; j < b; j++) {
			cout << v1[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
	
	 //print prefix vector
	for(int i = 0; i < a; i++) {
		for(int j = 0; j < b; j++) {
			cout << v2[i][j] << " ";
		}
		cout << "\n";
	}
	
	// adding count for elements in initial vector w mushroom and is larger than d in prefix
	//for(int i = 0; i < a; i++) {
		//for(int j = 0; j < b; j++) {
			//if(v1[i][j] == 'M' && v2[i][j] >= d) {
				//count++;
			//}
		//}
	//}
	cout << ans;
}
