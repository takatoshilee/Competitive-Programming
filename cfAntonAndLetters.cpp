#include <bits/stdc++.h>
using namespace std;

int main() {
  string str;
  set<char> s;
  cin >> str;
  if(str[1] != '}') {
    s.insert(str[1]);
  }
  while(str[1] != '}' && str[2] != '}') {
    cin >> str;
    s.insert(str[0]);
  }
  cout << s.size();
}
