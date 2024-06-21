#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const int N = 1e3 + 10;
const int INF = 1e9 + 10;

int val[N][N];
bool vis[N][N];
int lev[N][N];
int n , m;

vector<pair<int,int>> movements = {
    {0 , 1} , {0 , -1} , {1 , 0} , {-1 , 0},
    {1 , 1} , {1 , -1} , {-1, 1} , {-1 , -1}
};

bool isValid(int i , int j){
    return i >= 0 && j >= 0 && i < n && j < m;
}

int dfs(){
    int mx = 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            mx = max(mx , val[i][j]);
        }
    }
    queue<pair<int,int>> q;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            if(mx == val[i][j]){
                q.push({i , j});
                lev[i][j] = 0;
                vis[i][j] = true;
            }
        }
    }
    int ans = 0;
    while(!q.empty()){
        auto v = q.front();
        int v_x = v.first;
        int v_y = v.second;
        q.pop();
        for(auto movement : movements){
            int child_x = movement.first + v_x;
            int child_y = movement.second + v_y;
            if(!isValid(child_x , child_y)) continue;
            if(vis[child_x][child_y]) continue;
            q.push({child_x , child_y});
            lev[child_x][child_y] = lev[v_x][v_y] + 1;
            vis[child_x][child_y] = true;
            ans = max(ans , lev[child_x][child_y]);
        }
    }
    return ans;
}

void Reset(){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            vis[i][j] = false;
            lev[i][j] = INF;
        }
    }
}

void solve(){
    cin >> n >> m;
    Reset();
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> val[i][j];
        }
    }
    cout << dfs() << endl;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin >> T;
    while(T--)
        solve();
}