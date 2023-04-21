/* Approach: 
 * char, r means n - 1, l means n + 1
 * for loop that goes through the string, then prints the l/r
 * */
#include <bits/stdc++.h>
using namespace std;

int main() {
  char c; string str, keyboard;
  cin >> c >> str;
  keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
  for(int i = 0; i < str.length(); i++) {
    size_t pos = keyboard.find(str[i]);
    if(c == 'R') {
      cout << keyboard[pos - 1];
    } else {
      cout << keyboard[pos + 1];
    }
  }
}
