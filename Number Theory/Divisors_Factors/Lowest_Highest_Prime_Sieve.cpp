#include <bits/stdc++.h>
using namespace std;
     
#define endl '\n'
#define ll long long
const int N = 1e7 + 10;
vector<bool> isPrime(N , 1);
vector<int> lp(N , 0) , hp(N , 0);

void solve() {
    // Sieve Algorithm
    isPrime[0] = isPrime[1] = false;
    for(int i = 2 ; i < N ; i++){ // O(Nlog(logN))
        if(isPrime[i] == true){
            lp[i] = hp[i] = i;
            for(int j = 2 * i ; j < N ; j += i){ //O(Nlog(N))
                isPrime[j] = false;
                hp[j] = i;
                if(lp[j] == 0){
                    lp[j] = i;
                }
            }
        }
    }
    for(int i = 1 ; i < 100 ; i++){
        cout << lp[i] << " " << hp[i] << endl;
    }
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