/* Approach:
 * deque 
 * input n;
 * for loop with ifs to store instructions on a map with tuples, string and int
 * vector to store instructions
 * for loop with ifs for each of the 5 operations (0 indexed)
 * */
#include "bits/stdc++.h"
using namespace std;

int main() {
  int n;
  cin >> n;
  deque<char> d;
  vector < pair < string, pair<int, char> > > v;

  for(int i = 0; i < n; i++) {
    string str; cin >> str;
    if(str == "ADD_BACK" || str == "ADD_FRONT") {
      char c;
      cin >> c;
      v.push_back({str, {c, 0}});
    } else if(str == "SNIP_BACK" || str == "SNIP_FRONT" || str == "QUERY") {
      int a; cin >> a;
      v.push_back({str, {0, a}});
    }
  }
 
  for(int i = 0; i < n; i++) {
    if(v[i].first == "ADD_BACK") {
      d.push_back(v[i].second.first); //add char to d
    } else if(v[i].first == "ADD_FRONT") {
      d.push_front(v[i].second.first); //add char to d
    } else if(v[i].first == "SNIP_BACK") {
       for(int j = 0; j <= v[i].second.second; j++) {
          d.pop_back();
       }
    } else if(v[i].first == "SNIP_FRONT") {
        for(int j = 0; j <= v[i].second.second; j++) {
          d.pop_front();
        }
    } else if(v[i].first == "QUERY") {
      cout << d[v[i].second.second] << "\n";
    }
    //cout << "PRINT ";
    //for(int a = 0; a < d.size(); ++a) {
		//cout << d[a] << " ";
	//}
  }
  
}
