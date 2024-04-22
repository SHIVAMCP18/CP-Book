#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const int N = 1e3 + 10;
int graph[N][N];

void solve() {
    int n , m; // Vertices & Edges
    cin >> n >> m;

    // O(N^2) - space complexity
    // For  N >= 10^5 , this method is not valid.. :(
    for(int i = 0 ; i < m ; i++){
        int v1 , v2;
        cin >> v1 >> v2;
        graph[v1][v2] = 1;
        graph[v2][v1] = 1;
    }

    //For Weighted Grpahs
    //graph[v1][v2] = wt;
    //graph[v2][v1] = wt;
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
