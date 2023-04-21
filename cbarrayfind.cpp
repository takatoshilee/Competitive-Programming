#include <bits/stdc++.h>
using namespace std;

int main() {
  int l;
  cin >> l;
  vector<int> v;
  for(int i = 0; i < l; i++) {
    int a; cin >> a;
    v.push_back(a);
  }
  /*for(auto i : v) {
    cout << i << " ";
  }*/
  //cout << "\n";
  sort(v.begin(), v.end());
  //for(auto i : v) {
    //cout << i << " ";
  //}
  int q;
  cin >> q;
  for(int i = 0; i <= q; i++) {
    int a; cin >> a;
    int lowerIndex = lower_bound(v.begin(), v.end(), a) - v.begin();
    int upperIndex = upper_bound(v.begin(), v.end(), a) - v.begin();
    cout << "Smaller: " << lowerIndex << ", Greater: " << l - upperIndex << "\n";
  }
}

//1 2 3 4 5 7 7 8 9 9
