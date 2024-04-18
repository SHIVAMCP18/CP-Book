// (B^-1) % M = Modular Multiplicative Inverse Of B (MMI Of B)
#include <bits/stdc++.h>
using namespace std;
     
#define endl '\n'
#define ll long long
const int M = 1e9 + 7;

//1st Method to find MMI of B
//Time Complexity - O(log N) --> :)
int BinExp(int a , int b , int m){
    int ans = 1;
    while(b > 0){
        if(b & 1){
            ans = (ans *1ll * a) % m;;
        }
        a = (a * 1ll * a) % m;
        b >>= 1;
    }
    return ans;
}

void solve() {
    cout << BinExp(2 , M - 2 , M) << endl;

    //2nd Method to find the MMI of B
    //Time Complexity - O(M) --> :( 
    for(int i = 1 ; i < M - 1 ; i++){
        if((2 * i) % M == 1){
            cout << i << endl;
            break;
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