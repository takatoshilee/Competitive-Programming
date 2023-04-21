#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;

//#define dbg(v) \
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
	
#define ll long long
#define ld long double
#define ar arrayOHH

#define vt vector
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define sz(x) (int)(x).size()


template<class H, class... T> void DBG(H h, T... t) {
	cerr << to_string(h);
	if(sizeof...(t))
		cerr << ", ";
	DBG(t...);
}
#ifdef _DEBUG
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif

ll n, answer = 0;
//ll counts = 0;
vector<string> v3; // initial input
vector<string> v1; // sorted strings
vector<int> v2; // lexicographical numbering included
vector<int> ft; //fenwick

	


 //sum of elements from [0,x] inclusive
int query(int x) {
    int res = 0;
     //method 1
    for (;x;x-=(x&-x))  res += ft[x];

     //method 2
    //while (x) {
        //res += ft[x];
        //x -= (x&-x);
    //}
    return res;
}
void update(int x, int v) {
     //method 1
    for (;x<=n;x+=(x&-x)) ft[x] += v;

     //method 2
    //while (x <= n) {
        //ft[x] += v;
        //x += (x&-x);
    //}
}


int main() {
	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	cin >> n;
	ft.assign(n, 0);
	//ft.assign(n, 0);
	//for (int i=1;i<=n;i++) update(i, v2[i-1]);
	
	for(int i = 0; i < n; i++) {
		string input;
		cin >> input;
		v3.pb(input);
		v1.pb(input);
	}
	sort(v1.begin(), v1.end());
	//for(int i = 0; i < n; i++) {
		//int count{};
		//for(int j = 0; j < n; j++) {
			
		//}
	//}
	for(int i = 0; i < n; i++) {
		int lowerIndex = lower_bound(v1.begin(), v1.end(), v3[i]) - v1.begin();
		v2.push_back(lowerIndex + 1);
	}
	
	//fenwick tree satrts here
	for(int i = 1; i <= n; i++) {
		answer += query(v2[i]);
		update(i, 1);
		//cout << answer << "\n";
		//for(auto j : ft) {
			//cout << j << " ";
		//} cout << "\n";
	}
	
	//brute force method
	//for(int i = 0; i < n; i++) {
		//for(int j = i + 1; j < n; j++) { // may out of bounds index check
			//if(v3[i] < v3[j]) {
				//counts++;
			//}
		//}
	//}
	

	//for(auto i : v3) {
		//cout << i << " ";
	//}
	//cout << "\n";
	//for(auto i : v1) {
		//cout << i << " ";
	//}
	//cout << "\n";
	//for(auto i : v2) {
		//cout << i << " ";
	//}
	//cout << "\n";
	//for(auto i : ft) {
		//cout << i << " ";
	//}
	cout << answer;
}




//Approach:

//input n;
//vector 1
//for loop n times
	//input string to v1


