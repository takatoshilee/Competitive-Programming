#include <bits/stdc++.h>
using namespace std;
 
#define print1D(A) for (int k=0;k<A.size();k++) cout << A[k] << ((k==A.size()-1) ?'\n':' ')
#define print2D(A) for (int i=0;i<A.size();i++) print1D(A[i])
 
int main () {
    //vector<vector<int>> what = {{1,2},{3,4},{5,6,8,9}};
    //print2D(what);
    int best = 0, sum = 0;
    vector<int> array;
    int n;
    cin >> n;
	for (int k = 0; k < n; k++) {
		int a;
		cin >> a;
		array.push_back(a);
		sum = max(array[k],sum+array[k]);
		best = max(best,sum);
	}
	cout << best << "\n";
}
