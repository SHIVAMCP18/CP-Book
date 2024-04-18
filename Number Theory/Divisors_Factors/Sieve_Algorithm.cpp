#include <bits/stdc++.h>
using namespace std;
     
#define endl '\n'
#define ll long long
const int N = 1e7 + 10;
vector<bool> isPrime(N , 1);

void solve() {
    isPrime[0] = isPrime[1] = false;
    for(int i = 2 ; i < N ; i++){ // O(Nlog(logN))
        if(isPrime[i] == true){
            for(int j = 2 * i ; j < N ; j += i){ //O(Nlog(N))
                isPrime[j] = false;
            }
        }
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