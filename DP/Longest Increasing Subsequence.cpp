#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const int N = 25e2 + 10;

vector<int> a(N);
int dp[N];

int Lis(int i){
    if(dp[i] != -1) return dp[i];
    int ans = 1;
    for(int j = 0 ; j < i ; j++){
        if(a[i] > a[j]) {
            ans = max(ans , Lis(j) + 1);
        }
    }
    return dp[i] = ans;
}

void solve() {
    memset(dp , -1 , sizeof(dp));
    int n;
    cin >> n;

    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int ans = 0;
    for(int i = 0 ; i < n ; i++){
        ans = max(ans , Lis(i));
    }
    cout << ans << endl;
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