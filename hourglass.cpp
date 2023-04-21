#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;

//#define dbg(v) \
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	int m, n, max{}; 
	cin >> m >> n;
	vector< vector <int> > v1;
	v1.assign(m, vector<int>());
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			int input;
			cin >> input;
			v1[i].push_back(input);
		}
	}
	vector < vector <int> > v2;
	v2.assign(m, vector<int>());
	
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			if(i == 0 && j == 0) {
				v2[i].push_back(v1[i][j]);
			} else if(i == 0) {
				v2[i].push_back(v1[i][j] + v2[i][j - 1]);
			} else if (j == 0) {
				v2[i].push_back(v1[i][j] + v2[i - 1][j]);
			} else {
				v2[i].push_back(v1[i][j] + v2[i - 1][j] + v2[i][j - 1] - v2[i - 1][j - 1]);
			}
		}
	}
	//refering to A as the reference number
	for(int i = 0; i < m - 3; i++) {
		for(int j = 0; j < n - 3; j++) {
			int sum{};
			sum += v2[i + 2][j + 2] - v2[i - 1][j + 2] - v2[i + 2][j - 1] + v2[i - 1][j - 1];
			sum -= v1[i + 1][j] - v1[i + 1][j + 2];
			if (sum > max) {
				max = sum;
			}
		}
	}
	cout << max;
	//printing
	//cout << "\n";
	//for(int i = 0; i < m; i++) {
		//for(int j = 0; j < n; j++) {
			//cout << v2[i][j] << " ";
		//}
		//cout << "\n";
	//}
	
}


/*Approach:
create 2d prefix sum array and input 
test every possibility of hourglass possible by going row by row, then column by column

#include <bits/stdc++.h>
using namespace std;


    //printing

    vector < vector <int> > v2; //prefix vector
    v2.assign(a, vector<int>());
    //adding first row
    for (int i=0;i<a;i++) {
        for (int j=0;j<b;j++) {
            if (i==0 and j==0) {
                // topleft square
                v2[i].push_back(v1[i][j]);
            } else if (i == 0) {
                // topmost row
                v2[i].push_back(v1[i][j] + v2[i][j-1]);
            } else if (j==0) {
                // leftmost column 
                v2[i].push_back(v1[i][j] + v2[i-1][j]);
            } else {
                // general case
                v2[i].push_back(v1[i][j] + v2[i-1][j] + v2[i][j-1] - v2[i-1][j-1]);
            }
        }
    }

}*/
