#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

void solve() {
   int n,i; // n - number , i - ith bit
   cin >> n >> i;
   int ans = n | (1 << i);
   cout << ans; 
}

int main() {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);

        int t = 1;
        //cin >> t;
        while(t--)
           solve();
}