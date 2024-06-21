#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const int N = 1e3 + 10;
const int INF = 1e9 + 10;

vector<pair<int,int>> graph[N];

void dijkstra(int source){
    vector<int> vis(N , 0);
    vector<int> dist(N , INF);

    set<pair<int,int>> st;

    st.insert({0 , source});
    dist[source] = 0;

    while(st.size() > 0){
        auto node = *st.begin();
        int v = node.second;
        int v_dist = node.first;
        st.erase(st.begin());
        if(vis[v]) continue;
        vis[v] = 1;
        for(auto child : graph[v]){
            int child_v = child.first;
            int wt = child.second;
            if(dist[v] + wt < dist[child_v]){
                dist[child_v] = dist[v] + wt;
                st.insert({dist[child_v] , child_v});
            }
        }
    }
}

void solve(){
    int n , m;
    for(int i = 0 ; i < m ; i++){
        int v1 , v2 , wt;
        cin >> v1 >> v2 >> wt;
        graph[v1].push_back({v2 , wt});
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--)
        solve();
}