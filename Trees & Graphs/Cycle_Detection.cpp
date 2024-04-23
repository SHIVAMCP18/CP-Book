#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const int N = 1e3 + 10;
vector<int> graph[N];
bool vis[N];

bool dfs(int vertex , int par){
    vis[vertex] = true;
    bool isLoopExists = false;
    for(auto child : graph[vertex]){
        if(vis[child] && child == par) continue;
        if(vis[child]) return true;
        isLoopExists |= dfs(child , vertex);
    }
    return isLoopExists;
}

void solve(){
    int n , m;
    cin >> n >> m;

    for(int i = 0 ; i < m ; i++){
        int v1 , v2;
        cin >> v1 >> v2;

        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    bool isLoopExists = false;
    for(int i = 1 ; i <= n ; i++){
        if(vis[i]) continue;
        if(dfs(i , 0)){
            isLoopExists = true;
            break;
        }
    }
    cout << isLoopExists << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--)
        solve();
}