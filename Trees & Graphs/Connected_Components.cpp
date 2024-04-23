#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const int N = 1e2 + 10;
vector<int> graph[N];
bool vis[N];

//O(V + E) ---> v - Vertices , E- Edges
vector<vector<int> > cc; // Connected components
vector<int> current_cc;

void dfs(int vertex){
    vis[vertex] = true;
    current_cc.push_back(vertex);
    for(auto child : graph[vertex]){
        if(vis[child]) continue;
        dfs(child);
    }
}
void solve(){
    int n , m;
    cin >> n >> m;

    for(int i = 0 ; i < N ; i++){
        int v1 , v2;
        cin >> v1 >> v2;
        graph[v1].push_back(v2);
        graph[v2].push_back(v1);
    }
    int ct = 0;
    for(int i = 1 ; i <= n ; i++){
        if(vis[i]) continue;
        current_cc.clear();
        dfs(i);
        cc.push_back(current_cc);
        ct++;
    }
    cout << cc.size() << endl;
    for(auto c_cc : cc){
        for(auto vertex : c_cc){
            cout << vertex << " ";
        }
        cout << endl;
    }
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