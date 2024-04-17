#include <bits/stdc++.h>
using namespace std;
     
#define endl '\n'
#define ll long long

// If a <= 1e18 or M <= 1e18.In this case,we cannot use the iterative or recursive method
// It will overflow..
//In Such cases we use the Binary Multiplication.

//Time - Complexity  --> O(Log^2(N))
const int M = 1e9 + 7;
int BinMultiply(ll a , ll b);
int BinExp(ll a , ll b){
    int ans = 1;
    while(b > 0){
        if(b & 1){
            ans = BinMultiply(ans , a);
        }
        a = BinMultiply(a , a);
        b >>= 1;
    }
    return ans;
}
int BinMultiply(ll a , ll b){
    int ans = 0;
    while(b > 0){
        if(b & 1){
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b >>= 1;
    }
    return ans;
}
void solve() {
    cout << BinExp(2 ^ 1024 , 10); // This will not overflow.. :)
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