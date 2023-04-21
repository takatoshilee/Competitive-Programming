/* Approach:
 * input int n, bool for all same;
 * for loop n times, input 2 nums, if any are different, output rated and break, temp variable to store prev num and turn bool to true if any prev num is larger
 * unrated if bool is true, maybe if false
 * */
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, prevNum = 5000;
  bool inOrder = true;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int num1, num2;
    cin >> num1 >> num2;
    if(num1 != num2) {
      cout << "rated\n";
      exit(0);
    }
    if(prevNum < num1) {
      inOrder = false;
    }
    prevNum = num1;
    //cout << prevNum;
  }
  if(inOrder == false) {
    cout << "unrated";
  } else {
    cout << "maybe";
  }
}
