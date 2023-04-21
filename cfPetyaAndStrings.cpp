#include <bits/stdc++.h>
using namespace std;

int main() {
	string a;
	string b;
	cin >> a >> b;
	bool executed{};
	for(long long i = 0; i < a.size(); i++) {
		int acount = (int)a[i];
        int bcount = (int)b[i];
        if(isupper(a[i])) {
			acount += 32;
		}
		if(isupper(b[i])) {
			bcount += 32;
		}
        if(acount != bcount) {
            if(acount > bcount) {
                cout << 1;
                executed = true;
                break;
            } else if(acount < bcount) {
                cout << -1;
                executed = true;
                break;
            }
        }
	}

	if(!executed)cout << 0;
}

