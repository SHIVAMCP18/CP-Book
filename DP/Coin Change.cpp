#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const int N = 25e2 + 10;

int dp[10010];

int func(int amount , vector<int> &coins) {
    if(amount == 0) return 0;
    if(dp[amount] != -1) return dp[amount];
    int ans = INT_MAX;

    for(auto coin : coins) {
        if(amount - coin >= 0){
            ans = min(ans + 0ll, func(amount - coin , coins) + 1ll); // 1ll helps to convert it in long long because when we add INT_MAX + 1, It will overflow  
        }
    }
    return dp[amount] = ans;
}

int coinChange(vector<int> &coins , int amount) {
    int ans = func(amount , coins);
    return ans == INT_MAX ? -1 : ans;
}

void solve() {
    memset(dp , -1 , sizeof(dp));
    vector<int> coins = {2};
    cout << coinChange(coins , 3);
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