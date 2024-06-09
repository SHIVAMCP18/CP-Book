#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const int N = 1e2 + 7;

vector<int> tree[N];

int EvenCountSubTree[N];

void dfs(int vertex , int parent){
    if(vertex % 2 == 0){
        EvenCountSubTree[vertex]++;
    }
    for(auto child : tree[vertex]){
        if(child == parent) continue;
        dfs(child , vertex);
        EvenCountSubTree[vertex] += EvenCountSubTree[child];
    }
}

void solve(){
    //Input 
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
        cout << EvenCountSubTree[i] << endl;
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