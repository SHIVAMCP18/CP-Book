//Question  Link --  https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/practice-problems/algorithm/name-count/
#include <bits/stdc++.h>
using namespace std;
     
#define endl '\n'
#define ll long long
const int M = 1e9 + 7;
const int N = 1e5 + 7;
int fact[N];
// answer = KCN * N! (No. Of Ways to distribute the alphabets)
// KCN * N! = K! * (((K-N)!) ^ -1)
int BinExp(int a , int b , int m){ //Calculate the Modular multiplicative inverse
    int ans = 1;
    while(b > 0){
        if(b & 1){
            ans  = (ans * 1ll * a) % m;
        }
        a = (a * 1ll * a) % m;
        b >>= 1;
    }
    return ans;
}

void solve() {
    int n , k;
    cin >> n >> k;
    int den = BinExp(fact[k - n] , M - 2 , M); // ((K-N)!) ^ -1
    int ans = fact[k];// ans = K!
    ans = (ans * 1ll * den) % M; // ans = k! * (((K-N)!) ^ -1)
    cout << ans << endl;
}   

//O(T * Log(N) + N)
     
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     
    int t;
    cin >> t;
    fact[0] = 1;
    for(int i = 1 ; i < N ; i++){
        fact[i] = (fact[i - 1] * 1ll * i) % M; // Stores The Factorials...
    }
    while(t--)
        solve();
}