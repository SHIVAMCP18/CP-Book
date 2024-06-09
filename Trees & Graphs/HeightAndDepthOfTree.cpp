#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const int N = 1e2 + 7;
int depth[N] , height[N];

vector<int> tree[N];

void dfs(int vertex , int parent){

    for(auto child : tree[vertex]){

        if(child == parent) continue;
        depth[child] = depth[vertex] + 1;

        dfs(child , vertex);
        height[vertex] = max(height[vertex] , height[child] + 1);

    }

}

void solve(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n - 1 ; i++){
        int v1 , v2;
        cin >> v1 >> v2;
        tree[v1].push_back(v2);
        tree[v2].push_back(v1);
    }
    dfs(1 , 0);
    for(int i = 1 ; i <= n - 1 ; i++){
        cout << depth[i] << " " << height[i] << endl;
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