#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const int N = 1e3 + 10;

vector<int> graph[N];

void solve() {
    int n , m; // Vertices & Edges
    cin >> n >> m;
    // O(N + M) - space complexity
    // N - vertices , M - Edges
    for(int i = 0 ; i < m ; i++){
        int v1 , v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    //For Weighted Grpahs
    //vector<pair<int,int> > graph[N];
    //graph[v1].push_back({v2 , wt});
    //graph[v2].push_back({v1 , wt});
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--)
        solve();
}
