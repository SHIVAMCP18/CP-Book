#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const int N = 1e5 + 10;

// 0 1 1 2 3 5 8


int dp[N];
//TOP DOWN
int fib(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(dp[n] != -1) return dp[n];

    return dp[n] = fib(n - 1) + fib(n - 2);
}

void solve() {
    memset(dp , -1 , sizeof(dp));
    int n;
    cin >> n;

    //BOTTOM APPROCH
    dp[0] = 0;
    dp[1] = 1;
    for(int i = 2 ; i <= n ; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout << fib(n) << endl;
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