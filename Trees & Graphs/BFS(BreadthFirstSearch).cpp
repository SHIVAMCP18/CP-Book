#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const int N = 1e5 + 10;
vector<int> graph[N];

bool vis[N];
int level[N];

//Time - Complexity - O(V + E)
void dfs(int source){
    queue<int> q;
    q.push(source);
    vis[source] = true;

    while(!q.empty()){
        int current_vertex = q.front();
        q.pop();
        cout << current_vertex << " ";
        for(auto child : graph[current_vertex]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                level[child] = level[current_vertex] + 1;
            }
        }
    }
    cout << endl;
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
    dfs(1);
    for(int i = 1 ; i <= n ; i++){
        cout << i << ": " << level[i] << endl; 
    }
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