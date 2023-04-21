#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  stack<int> s1;
  stack<int> s2;
  stack<int> s3;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int input;
    cin >> input;
    switch(input) {
      case 1:
        s1.push(i + 1);
        break;
      case 2:
        s2.push(i + 1);
        break;
      case 3:
        s3.push(i + 1);
        break;
    }
  }
  vector<int> v;
  v.push_back(s1.size());
  v.push_back(s2.size());
  v.push_back(s3.size());
  sort(v.begin(), v.end());
  cout << v[0] << "\n";
  
  while(v[0] > 0) {
	  cout << s1.top() << " " << s2.top() << " " << s3.top() << "\n";
	  s1.pop();
	  s2.pop();
	  s3.pop();
	  v[0]--;
  }
}

// 2 2 3
//
