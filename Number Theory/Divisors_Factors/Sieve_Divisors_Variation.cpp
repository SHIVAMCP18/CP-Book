#include <bits/stdc++.h>
using namespace std;
     
#define endl '\n'
#define ll long long
const int N = 1e5 + 10;

vector<int> divisors[N];

void solve() {
    for(int i = 2 ; i < N ; i++){
        for(int j = i ; j < N ; j += i){
            divisors[j].push_back(i);
        }
    }

    for(int i = 1 ; i < 10 ; i++){
        for(auto div : divisors[i]){
            cout << div << " ";
        }
        cout << endl;
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