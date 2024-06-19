#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

const int N = 1e5 + 10;
const int INF = 1e9 + 10;

bool vis[8][8];
int level[8][8];

int getX(string s){
    return s[0] - 'a';
}

int getY(string s){
    return s[1] - '1';
}

bool IsValid(int x , int y){
    return x >= 0 && y >= 0 && x < 8 && y < 8;
}

vector<pair<int,int>> Movements = {
    {-1 , 2} , {1 , 2},
    {-1 , -2} , {1 , -2},
    {2 , -1} , {2 , 1},
    {-2 , -1} , {-2 , 1}
};

int bfs(string source , string dest){
    int sourceX = getX(source);
    int sourceY = getY(source);
    int destX = getX(dest);
    int destY = getY(dest);
    queue<pair<int,int>> q;
    q.push({sourceX , sourceY});
    vis[sourceX][sourceY] = true;
    level[sourceX][sourceY] = 0;

    while(!q.empty()){
        pair<int,int> v = q.front();
        int x = v.first , y = v.second;
        q.pop();
        
        for(auto movement : Movements){
            int childX = movement.first + x;
            int childY = movement.second + y;
            if(!IsValid(childX , childY)) continue;
            if(!vis[childX][childY]){
                q.push({childX , childY});
                level[childX][childY] = level[x][y] + 1;
                vis[childX][childY] = true;
            } 
        }
        if(level[destX][destY] != INF){
            break;
        }
    }
    return level[destX][destY];
}

void Reset(){
    for(int i = 0 ; i < 8 ; i++){
        for(int j = 0 ; j < 8 ; j++){
            level[i][j] = INF;
            vis[i][j] = 0;
        }
    }
}

void solve(){
    int n;
    cin >> n;
    while(n--){
        Reset();
        string s1 , s2;
        cin >> s1 >> s2;
        cout << bfs(s1 , s2) << endl;
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