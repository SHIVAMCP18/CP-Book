#include <bits/stdc++.h>
using namespace std;
     
#define endl '\n'
#define ll long long
const int M = 1e9 + 7;

//Euler's Theorem , ETF
// b <= 1e18
// Calculate 50 ^ 64 ^ 32 % M

ll BinExp(ll a , ll b , ll m){
    ll ans = 1;
    while(b > 0){
        if(b & 1){
            ans = (ans * 1ll * a) % m;
        }
        a = (a * 1ll * a) % m;
        b >>= 1;
    }
    return ans;
}
void solve() {
    ll b_c = BinExp(64 , 32 , M - 1); // Calculate the value of b^c
    ll a_b_c = BinExp(50 , b_c , M); // Calculate the value of a^b^c
    cout << a_b_c << endl;
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