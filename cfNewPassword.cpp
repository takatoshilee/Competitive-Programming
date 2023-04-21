/* Approach:
 * input n and k
 * string str
 * go through alphabet in for loop, and add alphabet to str size n
 * another for loop that puts 'a' for all str starting from str[1], then go until str[n - k]
 * */
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<char> v;
  while(v.size() < n) {
    for(int i = 0; i < k; i++) {
      v.push_back(i + 97);
      if(v.size() == n)
        break;
    }
  }
  for(char i : v) {
    cout << i;
  }

 }
