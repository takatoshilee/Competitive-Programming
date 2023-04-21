/* Approach
 * for loop to input
 * init stack
 * create different functions that would add etc, and a function that'll print the factorial
 * */
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, r; // r = register
  cin >> n;
  stack<int> s;
  vector<string> v;
  for(int i = 0; i < n; i++) {
    string str;
    cin >> str;
    v.push_back(str);
    if(str[0] == 'I' || (str[0] == 'P' && str[1] == 'U')) {
		i--;
		//cout << i;
	}
   }
  for(int i = 0; i < v.size(); i++) {
      if(v[i] == "STORE") {
		  r = s.top();
		  s.pop();
		  cout << i;
    } else if(v[i] == "LOAD") {
		  s.push(r);
		  cout << i;
    } else if(v[i] == "PLUS") {
		  int temp = s.top();
		  s.pop();
		  temp = temp + s.top();
		  s.push(temp);
		  cout << i;
    } else if(v[i] == "TIMES") {
		  int temp = s.top();
		  s.pop();
		  temp = temp * s.top();
		  s.push(temp);
		  cout << i;
    } else if(v[i] == "DONE") {
		  cout << s.top();
		  break;
		  cout << i;
    } else if(v[0] == "I") {
		  i++;
		  int a = stoi(v[i]);
		  if(s.top() == 0) {
			s.pop();
		  } 
		  i = a;
		  cout << i;
    } else if(v[0] == "P") {
		  int a;
		  i++;
		  if(v[i[0]] == "-") {
			  a = stoi(v[6])* -1;
		  } else {
			  a = stoi(v[5]);
		  }
		  //s.push(a);
		  cout << i;
    }
  }
}
