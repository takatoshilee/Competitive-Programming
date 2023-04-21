#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<ll, int> pli;

const ll INF = 1e18;
const int MAXN = 205;

vector<pair<int, ll>> adj[MAXN];
int n, e, Q;

void dijkstra(int s, vector<ll>& dist) {
    priority_queue<pli, vector<pli>, greater<pli>> pq;
    pq.push({0, s});
    dist[s] = 0;

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        for (auto& [v, w] : adj[u]) {
            if (dist[v] > dist[u] + w) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> e >> Q;

    for (int i = 0; i < e; i++) {
        int x, y;
        ll t;
        cin >> x >> y >> t;
        adj[x].emplace_back(y, t);
        adj[y].emplace_back(x, t);
    }

    while (Q--) {
        int a, b;
        cin >> a >> b;

        vector<ll> dist(n, INF);
        dijkstra(a, dist);

        if (dist[b] == INF)
            cout << "-1\n";
        else
            cout << dist[b] << "\n";
    }

    return 0;
}
