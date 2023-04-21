/* Approach
 * input first line, sum , if sum exceeds, counter++
 * */
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, b, d, sum{}, counter{};
  cin >> n >> b >> d;
  for(int i = 0; i < n; i++) {
    int input; 
    cin >> input;
    if(input > b) {
      continue;
    }
    sum += input;
    if (sum > d) {
      counter++;
      sum = 0;
    }
  }
   if (sum > d) {
      counter++;
      sum = 0;
    }
  cout << counter;
}
