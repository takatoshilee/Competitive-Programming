#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    deque<int> dq;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if (i % 2 == 0) {
            dq.push_front(a);
        } else {
            dq.push_back(a);
        }
    }

    if (n % 2 == 0) {
        reverse(dq.begin(), dq.end());
    }

    for (auto x : dq) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}
