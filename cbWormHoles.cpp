#include "bits/stdc++.h"
//#include "debugging.h"
using namespace std;

//#define dbg(v) \
	//cout << "Line(" << __LINE__ << ") -> " << #v << " = " << (v) << endl;
using ll = long long;
const ll INF = 1e18;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	//freopen("speed.in", "r", stdin);
	//freopen("speed.out", "w", stdout);
	int n, k;
	cin >> n >> k;
	vector<ll> dp; //n elements, assign all to inf
	for(int i = 1; i <= n; i++) {
		dp.push_back(i);
	}
	for(auto i : dp){
		cout << i<< " ";
	}cout << endl;
	if(n == 0) {
		cout << 0;
		return 0;
	}
	for(ll i = 0; i < k; i++) {
		ll a, b;
		cin >> a >> b;
		for(ll j = b; j < n; j++) {
			dp[j] = min(dp[j], dp[a] + (j - b) +1);
		}
	}
	//for(auto i : dp) {
		//cout << i << " ";
	//}cout << "\n";
	cout << dp[n -1] - 1;
}
//P1: 
//I a e m b u s a o s e, p f a i a o h-w. I i a t t o a, p, a f. I s t c i b m s I w t e t i t t H S i N b T S a t m O N U C b B.

//P2:
//T l e "H S i N" b T S, r a a s i t U K i 1, i a h r o t s t e a i i a t i s p t s t h i. T u t o t s j w t m l c a s o u, w i o a b t u o r q a r. T r p "H s i N?" s a a p r o t u n t f o's p i s, a t f t a f t k t i m n c.  

//F, t s t u i o n-c a t c t m a a a r. T l 1-3 i t s i i a i, a t s p t w d n c t i e. M, t s d a t l, e a c b t s a t a, a a t t u d t b l. T r q i l 7-8
