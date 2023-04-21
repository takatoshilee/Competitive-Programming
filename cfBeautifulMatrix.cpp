#include <bits/stdc++.h>
using namespace std;
int x, y = 1;
bool entered = false;

vector<int> inputVector(vector<int> v) {
    for(int i = 1; i <= 5; i++) {
        int input;
        cin >> input;
        v.push_back(input);
        if(input != 0){
            x = i;
            entered = true;
        }
    }
    if (entered == false) {
        y++;
    }
    return v;
}

int main() {
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    vector<int> v4;
    vector<int> v5;
    inputVector(v1);
    inputVector(v2);
    inputVector(v3);
    inputVector(v4);
    inputVector(v5);
    //cout << x << " " << y;
    int count{};
    x = abs(x - 3);
    y = abs(y - 3);
	count = x + y;
	cout << count;
}
