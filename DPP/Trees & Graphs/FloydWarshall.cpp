//https://codeforces.com/problemset/problem/295/B

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const int N = 510;
const int INF = 1e9 + 10;

ll dist[N][N];

void solve(){
    int n;
    cin >> n;
    for(int i = 1 ; i<= n ; i++){
        for(int j = 1 ; j <= n ; j++){
            cin >> dist[i][j];
        }
    }
    vector<int> deletion_order(n);
    for(int i = 0 ; i < n ; i++){
        cin >> deletion_order[i];
    }
    reverse(deletion_order.begin() , deletion_order.end());
    vector<ll> ans;
    for(int k = 0 ; k < n ; k++){
        int k_v = deletion_order[k];
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <= n ; j++){
                ll new_dist = dist[i][k_v] + dist[k_v][j];
                dist[i][j] = min(dist[i][j] , new_dist);
            }
        }
        ll sum = 0;
        for(int i = 0 ; i <= k ; i++){
            for(int j = 0 ; j <= k ; j++){
                sum += dist[deletion_order[i]][deletion_order[j]];
            }   
        }
        ans.push_back(sum);
    }
    reverse(ans.begin() , ans.end());
    for(auto value : ans){
        cout << value << " ";
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T = 1;
    // cin >> T;
    while(T--)
        solve();
}