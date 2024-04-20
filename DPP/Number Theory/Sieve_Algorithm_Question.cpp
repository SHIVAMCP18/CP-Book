//Question Link -  https://www.hackerearth.com/problem/algorithm/monk-and-divisor-conundrum-56e0eb99/
#include <bits/stdc++.h>
using namespace std;
     
#define endl '\n'
#define ll long long
const int N = 2e5 + 10;

int hsh[N];
int multiples_ct[N];

void solve() {
    int p , q;
    cin >> p >> q;
    ll lcm = p * 1ll * q / __gcd(p , q);
    ll ans = multiples_ct[p] + multiples_ct[q];
    if(lcm < N){
        ans -= multiples_ct[lcm];
    }
    cout << ans << endl;

}   

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
     
    int n;
    cin >> n;

    for(int i = 0 ; i < n ; i++){
        int x;
        cin >> x;
        hsh[x]++;
    }
    for(int i = 1 ; i < N ; i++){
        for(int j = i ; j < N ; j += i){
            multiples_ct[i] += hsh[j];
        }
    }
    int t;
    cin >> t;
    while(t--)
        solve();
}