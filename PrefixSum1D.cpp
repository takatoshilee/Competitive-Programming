#include <bits/stdc++.h>
using namespace std;



int main() {
    vector<int> v1;
    vector<int> v2; //prefix
    map<int, int> m;
    int n, k, sum{}, count{}; cin >> n >> k;
    for (int i=0;i<n;i++) {
        int a; cin>>a;
        v1.push_back(a);
        sum += a;
        v2.push_back(sum);
    }
    for(int i = 0; i < n; i++) {
        if(k == v2[i]) {
            count++;
        }
        count += m[v2[i] - k];
        m[v2[i]]++;
    }
    cout << count;
}
