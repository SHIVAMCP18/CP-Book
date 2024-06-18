#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const int N = 1e3;
vector<int> graph[N];

int par[N];

void dfs(int vertex , int parent){
    par[vertex] = parent;
    for(auto child : graph[vertex]){
        if(child == parent) continue;
        dfs(child , vertex);
    }
}

vector<int> path(int vertex){
    vector<int> ans;
    while(vertex != 0){
        ans.push_back(vertex);
        vertex = par[vertex];
    }
    reverse(ans.begin() , ans.end());
    return ans;
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

    int x , y;
    cin >> x >> y;
    vector<int> path_x = path(x);
    vector<int> path_y = path(y);
    int mn_ln = min(path_x.size() , path_y.size());

    int lca = -1;
    for(int i = 0 ; i < mn_ln ; i++){
        if(path_x[i] == path_y[i]){
            lca = path_x[i];
        }
        else{
            break;
        }
    }
    cout << lca << endl;
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