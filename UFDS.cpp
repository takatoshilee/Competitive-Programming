#include "bits/stdc++.h"
using namespace std;
typedef vector<int> vi;
vi parent;
int main() {
	// parent[1] = 1, parent[2] = 1
	// parent[3] = 3, parent[4] = 3

	// merge(1,4)
	// parent[1] = 1, parent[2] = 1...parent[4]=1
	int n, m;
	cin >> n >> m;
}

// ternary operator
int findSet(int x) { return (parent[x] == x) ? x : parent[x]=findSet(parent[x]);}
void merge(int x, int y) {
    int a = findSet(x), b = findSet(y);
    parent[a] = b; // OR parent[b] = a;
}
