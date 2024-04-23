#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const int N = 1e5 + 10;
vector<int> graph[N];
bool vis[N];
//DFS - Depth First Search
//Time Complexity - O(V + E)  --> V - vertex , Edges

void DFS(int vertex){
    /* Take action on vertex after entering
     *   the vertex
     */
    vis[vertex] = true;
    for(auto child : graph[vertex]){
        /* Take action on child before
         * entering the child node
         */
        if(vis[child]) continue;
        DFS(child);
        /* Take action on child
         * after exiting child node
         */
    }
    /* Take action on vertex before
     * exiting the vertex
     */
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