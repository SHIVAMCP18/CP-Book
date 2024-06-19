#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const int N = 1e5 + 10;
const int INF = 1e9 + 10;

vector<pair<int,int>> graph[N];
vector<int> level(N , INF);
int n , m;

int dfs(){
    deque<int> q;
    q.push_back(1);
    level[1] = 0;

    while(!q.empty()){
        int current_vertex = q.front();
        q.pop_front();

        for(auto child : graph[current_vertex]){
            int child_v = child.first;
            int wt = child.second;
            if(level[current_vertex] + wt < level[child_v]){
                level[child_v] = level[current_vertex] + wt;
                if(wt == 1){
                    q.push_back(child_v);
                }
                else{
                    q.push_front(child_v);
                }
            }
        }
    }
    return level[n] == INF ? -1 : level[n];
}

void solve(){
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++){
        int v1 , v2;
        cin >> v1 >> v2;
        if(v1 == v2) continue;
        graph[v1].push_back({v2 , 0});
        graph[v2].push_back({v1 , 1});
    }
    cout << dfs() << endl;
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