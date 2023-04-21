/*Approach:
input n;
string s;
add to map in ascii position through for loop that goes through the string
create another for loop that prints it all out
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  map<int, int> m;
  for(int i = 0; i < n; i++) {
    m[s[i]]++;
  }
  for(int i = 97; i < 123; i++) {
    cout << char(i) << " " << m[i] << "\n";
  }
}
