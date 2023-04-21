#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main () {
    ll h,w,d,k; cin>>h>>w>>d>>k;
    char grid[h][w];
    vii mushrooms;
    ll sprinklers[h][w];
    memset(sprinklers, 0, sizeof(sprinklers));
    for (int i=0;i<h;i++) {
        for (int j=0;j<w;j++) {
            cin >> grid[i][j];
            if (grid[i][j] == 'M') {
                mushrooms.push_back({i,j});
            }
        }
    }

    for (int i=0;i<h;i++) {
        for (int j=0;j<w;j++) {
            if (grid[i][j] == 'S') sprinklers[i][j] = 1;
            if (i==0 and j==0) {
                continue;
            } else if (i==0) {
                sprinklers[i][j] += sprinklers[i][j-1];
            } else if (j==0) {
                sprinklers[i][j] += sprinklers[i-1][j];
            } else {
                sprinklers[i][j] += (sprinklers[i-1][j] + sprinklers[i][j-1] - sprinklers[i-1][j-1]);
            }
        }
    }
    int ans=0;
    for (int i=0;i<mushrooms.size();i++) {
        ll cnt = 0;
        int x1 = max(mushrooms[i].second - d,0LL); int y1 = max(0LL,mushrooms[i].first - d);
        int x2 = min(mushrooms[i].second + d, w-1); int y2 = min(mushrooms[i].first + d,h-1);
        if (y1-1 < 0 and x1-1 < 0) {
            cnt = sprinklers[y2][x2];
        } else if (y1 -1 < 0) {
            cnt = sprinklers[y2][x2] - sprinklers[y2][x1-1];
        } else if (x1 - 1 < 0) {
            cnt = sprinklers[y2][x2] - sprinklers[y1-1][x2];
        } else {
            cnt = sprinklers[y2][x2] - sprinklers[y1-1][x2] - sprinklers[y2][x1-1] + sprinklers[y1-1][x1-1];
        }
        if (cnt >= k) ans++;
    }

    cout << ans << endl;
}
