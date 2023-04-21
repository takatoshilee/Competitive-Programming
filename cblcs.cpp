#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s1, s2;
    cin >> s1 >> s2;
    int n1 = s1.length(), n2 = s2.length();

    // initialize the table
    vector<vector<int>> dp(n1+1, vector<int>(n2+1, 0));

    // fill in the table
    for (int i = 1; i <= n1; i++) {
        for (int j = 1; j <= n2; j++) {
            if (s1[i-1] == s2[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
            } else {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }

    // print the answer
    cout << dp[n1][n2] << '\n';
    return 0;
}
