#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
const int N = 1e7 + 7;
vector<int> is_prime(N , 1);

void solve(){
    is_prime[0] = is_prime[1] = 0;
    for(int i = 2 ; i * i < N ; i++){
        if(is_prime[i] == 1){
            for(int j = 2 * i ; j < N ; j += i){
                is_prime[j] = 0;
            }
        }
    }
    int ct = 0;
    for(int i = 2 ; i < N ; i++){
        ct = ct + is_prime[i];
        is_prime[i] = ct;
    }

    int q;
    cin >> q;
    while(q--){
        int l , r;
        cin >> l >> r;
        cout << is_prime[r] - is_prime[l - 1] << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T = 1;
    //cin >> T;
    while(T--)
        solve();
}