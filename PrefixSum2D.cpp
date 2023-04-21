#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b; // a size is height
    vector < vector<int> > v1;
    v1.assign(a, vector<int>());
    for(int i = 0; i < a ; i++) {
        for(int j = 0; j < b; j++) {
            int input;
            cin >> input; 
            v1[i].push_back(input);
        }
    }
    //printing

    vector < vector <int> > v2; //prefix vector
    v2.assign(a, vector<int>());
    //adding first row 
    for (int i=0;i<a;i++) {
        for (int j=0;j<b;j++) {
            if (i==0 and j==0) {
                // topleft square
                v2[i].push_back(v1[i][j]);
            } else if (i == 0) {
                // topmost row
                v2[i].push_back(v1[i][j] + v2[i][j-1]);
            } else if (j==0) {
                // leftmost column 
                v2[i].push_back(v1[i][j] + v2[i-1][j]);
            } else {
                // general case
                v2[i].push_back(v1[i][j] + v2[i-1][j] + v2[i][j-1] - v2[i-1][j-1]);
            }
        }
    }
    
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cout << v2[i][j] << " ";
        }
        cout << "\n";
    }
}
