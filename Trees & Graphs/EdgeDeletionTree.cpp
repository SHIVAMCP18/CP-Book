#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const int N = 1e3;
vector<int> graph[N];

int val[N];
int SubTree_Sum[N];

void dfs(int vertex , int parent){
    SubTree_Sum[vertex] += val[vertex];
    for(auto child : graph[vertex]){
        if(child == parent) continue;
        dfs(child , vertex);
        SubTree_Sum[vertex] += SubTree_Sum[child];
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
    for(int i = 1 ; i <= n ; i++){
        cin >> val[i];
    }
    dfs(1 , 0);
    ll ans = 0;
    for(int i = 2 ; i <= n ; i++){
        int part1 = SubTree_Sum[i];
        int part2 = SubTree_Sum[1] - part1;
        ans = max(ans , (part1 * 1ll * part2));
    }
    cout << ans << endl;
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