#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi arr, ft;int n;

// sum of elements from [0,x] inclusive
int query(int x) {
    int res = 0;
    // method 1
    for (;x;x-=(x&-x))  res += ft[x];

    // method 2
    //while (x) {
        //res += ft[x];
        //x -= (x&-x);
    //}
    return res;
}
void update(int x, int v) {
    // method 1
    for (;x<=n;x+=(x&-x)) ft[x] += v;

    // method 2
    //while (x <= n) {
        //ft[x] += v;
        //x += (x&-x);
    //}
}
int main () {
     cin>>n;
     for (int i=0;i<n;i++){
         int a; cin>>a;
         arr.push_back(a);
     }

//     for (auto v : arr) cout << v << endl;

     // where it starts
     ft.assign(n, 0);
     for (int i=1;i<=n;i++) update(i, arr[i-1]);
     //cout << "bucket 4 is " << ft[4] << endl;
     //cout << query(3) << endl;
     for(auto i : ft) {
		 cout << i << " ";
	 }
	 
     //update(2, 1);
     //cout << "\n";
     //for(auto i : ft) {
		 //cout << i << " ";
	 //}
}
