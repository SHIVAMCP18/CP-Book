#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const int N = 1e3;
vector<int> graph[N];

int depth[N];

void dfs(int vertex , int parent){
    for(auto child : graph[vertex]){
        if(child == parent) continue;
        depth[child] = depth[vertex] + 1;
        dfs(child , vertex);
    }
}

void solve(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n - 1 ; i++){
        int v1 , v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    dfs(1 , 0);

    int mx_depth = -1;
    int mx_d_node;
    for(int i = 1 ; i <= n ; i++){
        if(mx_depth < depth[i]){
            mx_depth = depth[i];
            mx_d_node = i;
        }
        depth[i] = 0;
    }
    dfs(mx_d_node , 0);
    mx_depth = -1;
    for(int i = 1 ; i <= n ; i++){
        if(mx_depth < depth[i]){
            mx_depth = depth[i];
        }
    }
    cout << mx_depth << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    //cin >> T;
    while(T--)
        solve();
}