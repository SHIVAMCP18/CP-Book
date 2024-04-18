#include <bits/stdc++.h>
using namespace std;
     
#define endl '\n'
#define ll long long

void solve() {
    //O(N)
    int n;
    cin >> n;
    bool is_prime = true;
    if(n == 1){
        cout << 0 << endl;
        return;
    }
    for(int i = 2 ; i < n ; i++){
        if(n % i == 0){
            is_prime = false;
            break;
        }
    }
    cout << is_prime << endl;

    //O(sqrt(N))
    bool is_prime1 = true;
    for(int i = 2 ; i * i <= n ; i++){
        if(n % i == 0){
            is_prime1 = false;
            break;
        }
    }
    cout << is_prime1;
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